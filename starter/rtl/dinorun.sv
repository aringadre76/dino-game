
module dinorun
  import dinorun_pkg::*;
(
    input logic clk_25_175_i,
    input logic rst_ni,

    input logic start_i,
    input logic up_i,
    input logic down_i,

    output logic       digit0_en_o,
    output logic [3:0] digit0_o,
    output logic       digit1_en_o,
    output logic [3:0] digit1_o,
    output logic       digit2_en_o,
    output logic [3:0] digit2_o,
    output logic       digit3_en_o,
    output logic [3:0] digit3_o,

    output logic [3:0] vga_red_o,
    output logic [3:0] vga_green_o,
    output logic [3:0] vga_blue_o,
    output logic       vga_hsync_o,  // Top-level output
    output logic       vga_vsync_o   // Top-level output
);

  // Random 16 bit
  logic lfsrNext;
  logic [15:0] random;

  lfsr16 lfsr16 (
      .clk_i (clk_25_175_i),
      .rst_ni(rst_ni),
      .next_i(lfsrNext),
      .rand_o(random)
  );

  // Edge Detector
  logic edgeOut;

  edge_detector edge_detector (
      .clk_i (clk_25_175_i),
      .data_i(vga_vsync_o),
      .edge_o(edgeOut)
  );

  // Score Counter
  logic scoreReset;
  logic scoreEnable;
  logic [3:0] d0, d1, d2, d3;

  score_counter score_counter (
      .clk_i(clk_25_175_i),
      .rst_ni(scoreReset & rst_ni),
      .en_i(scoreEnable & edgeOut),
      .digit0_o(d0),
      .digit1_o(d1),
      .digit2_o(d2),
      .digit3_o(d3)
  );

  // VGA Timer
  logic [9:0] x, y;
  logic visible;
  logic hsync_d, vsync_d;  // Intermediate signals for vga_timer
  logic hsync_q, vsync_q;  // Flip-flop outputs for compliance

  vga_timer vga_timer (
      .clk_i(clk_25_175_i),
      .rst_ni(rst_ni),
      .hsync_o(hsync_d),  // Drive intermediate signals
      .vsync_o(vsync_d),  // Drive intermediate signals
      .visible_o(visible),
      .position_x_o(x),
      .position_y_o(y)
  );

  always_ff @(posedge clk_25_175_i) begin
    hsync_q <= hsync_d;  // Latch hsync_d to hsync_q
    vsync_q <= vsync_d;  // Latch vsync_d to vsync_q
  end

  // Assign to top-level outputs
  assign vga_hsync_o = hsync_q;
  assign vga_vsync_o = vsync_q;


  logic titlePixel;

  title title (
      .pixel_x_i(x),
      .pixel_y_i(y),
      .pixel_o  (titlePixel)
  );

  // Bird

  logic birdNext;
  logic birdSpawn;
  logic [1:0] birdRandom;
  logic birdPixel;

  bird bird (
      .clk_i(clk_25_175_i),
      .rst_ni(rst_ni & scoreReset),
      .next_frame_i(edgeOut & birdNext),
      .spawn_i(birdSpawn),
      .rand_i(birdRandom),
      .pixel_x_i(x),
      .pixel_y_i(y),
      .pixel_o(birdPixel)
  );

  // Cactus

  logic cactusNext;
  logic cactusSpawn;
  logic [1:0] cactusRandom;
  logic cactusPixel;

  cactus cactus (
      .clk_i(clk_25_175_i),
      .rst_ni(rst_ni & scoreReset),
      .next_frame_i(edgeOut & cactusNext),
      .spawn_i(cactusSpawn),
      .rand_i(cactusRandom),
      .pixel_x_i(x),
      .pixel_y_i(y),
      .pixel_o(cactusPixel)
  );

  logic cactusNext2;
  logic cactusSpawn2;
  logic [1:0] cactusRandom2;
  logic cactusPixel2;

  cactus cactus2 (
      .clk_i(clk_25_175_i),
      .rst_ni(rst_ni & scoreReset),
      .next_frame_i(edgeOut & cactusNext2),
      .spawn_i(cactusSpawn2),
      .rand_i(cactusRandom2),
      .pixel_x_i(x),
      .pixel_y_i(y),
      .pixel_o(cactusPixel2)
  );

  // Dino

  logic dinoNext;
  logic dinoUp;
  logic dinoDown;
  logic dinoHit;
  logic dinoPixel;

  dino dino (
      .clk_i(clk_25_175_i),
      .rst_ni(rst_ni & scoreReset),
      .next_frame_i(edgeOut & dinoNext),
      .up_i(dinoUp),
      .down_i(dinoDown),
      .hit_i(dinoHit),
      .pixel_x_i(x),
      .pixel_y_i(y),
      .pixel_o(dinoPixel)
  );
  // assign dinoHit = state_q == HIT;

  // State Machine

  state_t state_d, state_q;
  always_ff @(posedge clk_25_175_i) begin
    if (!rst_ni) begin
      state_q <= WAITING_TO_START;
    end else begin
      state_q <= state_d;
    end
  end

  logic [4:0] flash_counter_q;
  logic flash_dino_q;
  logic [4:0] flash_counter_d;
  logic flash_dino_d;

  always_comb begin
    flash_counter_d = flash_counter_q;
    flash_dino_d = flash_dino_q;

    if (state_q == FLASH_HIT) begin
      if (edgeOut) begin  // Triggers at the end of each frame
        if (flash_counter_q < 5'd30) begin  // About 1 second at 30 fps
          flash_counter_d = flash_counter_q + 1;

          // Toggle dino visibility every 4 frames (adjust as desired)
          if (flash_counter_q[2:0] == 3'b000) begin
            flash_dino_d = ~flash_dino_q;
          end
        end else begin
          // Flashing period is over
          flash_counter_d = flash_counter_q;  // Stop counting
          flash_dino_d = 1'b1;  // Ensure the dinosaur remains visible
        end
      end
    end else begin
      // In other states, reset flashing logic
      flash_counter_d = '0;
      flash_dino_d = 1'b1;  // Ensure dino is visible in other states
    end
  end


  always_ff @(posedge clk_25_175_i) begin
    if (!rst_ni) begin
      flash_counter_q <= '0;
      flash_dino_q <= 1'b1;
    end else begin
      flash_counter_q <= flash_counter_d;
      flash_dino_q <= flash_dino_d;
    end
  end

  always_comb begin
    state_d = state_q;

    {vga_red_o, vga_green_o, vga_blue_o} = 12'h000;


    // Place this at the end of the always_comb block
    if (visible) begin
      // Default background color
      // {vga_red_o, vga_green_o, vga_blue_o} = 12'hFFF;

      if (dinoPixel) begin
        if (state_q == FLASH_HIT) begin
          if (flash_counter_q < 5'd30) begin
            // During flashing period
            if (flash_dino_q) begin
              {vga_red_o, vga_green_o, vga_blue_o} = 12'h0F0;
            end
            // Else, keep background color (dino is invisible)
          end else begin
            // After flashing period, keep dinosaur visible
            {vga_red_o, vga_green_o, vga_blue_o} = 12'h0F0;
          end
        end else begin
          // In other states, always draw the dino
          {vga_red_o, vga_green_o, vga_blue_o} = 12'h0F0;
        end
      end else if (birdPixel || cactusPixel || cactusPixel2) begin
        // Obstacles remain on screen but are stationary
        {vga_red_o, vga_green_o, vga_blue_o} = 12'h0A0;  // Or appropriate color
      end else if (y >= Ground && y < ScreenHeight) begin
        {vga_red_o, vga_green_o, vga_blue_o} = 12'hF91;
      end
    end else begin
      // Outside visible area
      {vga_red_o, vga_green_o, vga_blue_o} = 12'h000;
    end


    // Setting Digits to default
    digit0_en_o = 1;
    digit1_en_o = 1;
    digit2_en_o = 1;
    digit3_en_o = 1;
    digit0_o = 0;
    digit1_o = 0;
    digit2_o = 0;
    digit3_o = 0;

    // lfsr default setting
    lfsrNext = 0;

    // score counter default setting
    scoreReset = 1;
    scoreEnable = 0;

    // bird default setting
    birdNext = 0;
    birdSpawn = 0;

    // cactus default setting
    cactusNext = 0;
    cactusNext2 = 0;
    cactusSpawn = 0;
    cactusSpawn2 = 0;

    // dino default setting
    dinoNext = 0;
    dinoUp = 0;
    dinoDown = 0;
    dinoHit = 0;

    birdRandom = 2'b00;
    cactusRandom = 2'b00;
    cactusRandom2 = 2'b00;

    unique case (state_q)
      WAITING_TO_START: begin
        lfsrNext = 1;
        dinoNext = 1;

        if (titlePixel) begin
          {vga_red_o, vga_green_o, vga_blue_o} = 12'hF0F;
        end

        if (up_i) begin
          dinoUp = 1;
        end
        if (down_i) begin
          dinoDown = 1;
        end
        if (start_i) begin
          scoreReset = 0;
          lfsrNext = 0;
          state_d = RUN;
        end else begin
          state_d = state_q;
        end
      end

      RUN: begin
        scoreReset = 1;
        scoreEnable = 1;

        dinoNext = 1;

        birdNext = 1;
        birdSpawn = 0;
        birdRandom = 0;

        cactusNext = 1;
        cactusSpawn = 0;
        cactusRandom = 0;

        cactusNext2 = 1;
        cactusSpawn2 = 0;
        cactusRandom2 = 0;

        lfsrNext = 1;

        digit0_o = d0;
        digit1_o = d1;
        digit2_o = d2;
        digit3_o = d3;

        if (random[12:7] == 6'b101010) begin
          birdSpawn  = 1;
          birdRandom = random[5:4];
        end

        if (random[12:8] == 5'b00000) begin
          cactusSpawn  = 1;
          cactusRandom = random[3:2];
        end

        if (random[12:8] == 5'b10101) begin
          cactusSpawn2  = 1;
          cactusRandom2 = random[3:2];
        end

        if (up_i) begin
          dinoUp = 1;
        end
        if (down_i) begin
          dinoDown = 1;
        end
        if ((dinoPixel & birdPixel) ||
                (dinoPixel & cactusPixel) ||
                (dinoPixel & cactusPixel2)) begin
          state_d = HIT;
        end else begin
          state_d = state_q;
        end
      end

      HIT: begin
        scoreEnable = 0;
        lfsrNext = 0;

        // Stop moving, but don't reset
        dinoNext = 0;
        birdNext = 0;
        cactusNext = 0;
        cactusNext2 = 0;

        digit0_o = d0;
        digit1_o = d1;
        digit2_o = d2;
        digit3_o = d3;

        dinoHit = 1;

        // Transition to FLASH_HIT state
        state_d = FLASH_HIT;
      end

      FLASH_HIT: begin


        // Keep everything stopped and in place
        scoreEnable = 0;
        lfsrNext = 0;
        dinoNext = 0;
        birdNext = 0;
        cactusNext = 0;
        cactusNext2 = 0;

        digit0_o = d0;
        digit1_o = d1;
        digit2_o = d2;
        digit3_o = d3;

        dinoHit = 1;

        // Rendering with flashing dino
        if (visible && dinoPixel && flash_dino_q) begin
          {vga_red_o, vga_green_o, vga_blue_o} = 12'h0F0;
        end

        // Return to title screen or reset game based on input
        if (start_i) begin
          scoreReset = 0;
          state_d = RUN;
        end else if (up_i || down_i) begin
          scoreReset = 0;
          state_d = WAITING_TO_START;
        end else begin
          state_d = state_q;
        end
      end

      default: begin
        state_d = WAITING_TO_START;
      end
    endcase
  end

endmodule
