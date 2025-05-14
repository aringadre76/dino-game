module cactus (
    input  logic       clk_i,
    input  logic       rst_ni,
    input  logic       next_frame_i,
    input  logic       spawn_i,
    input  logic [1:0] rand_i,
    input  logic [9:0] pixel_x_i,
    input  logic [9:0] pixel_y_i,
    output logic       pixel_o
);

  // Parameters
  parameter int CACTUS_WIDTH = 15;
  parameter int CACTUS_HEIGHT = 33;
  parameter int SCREEN_WIDTH = 640;
  parameter int SCREEN_HEIGHT = 480;
  parameter int GROUND_LEVEL = 400;  // Adjusted based on dino module
  parameter int GROUND_Y       = GROUND_LEVEL - CACTUS_HEIGHT; // Position cactus so its bottom aligns with ground
  parameter int CACTUS_SPEED = 8;

  // State variables
  logic [10:0] cactus_x_q;     // X position of the cactus
  logic [1:0]  cactus_image_q; // Selected cactus image

  logic [14:0] CACTUS0[0:CACTUS_HEIGHT-1];
  logic [14:0] CACTUS1[0:CACTUS_HEIGHT-1];
  logic [14:0] CACTUS2[0:CACTUS_HEIGHT-1];
  logic [14:0] CACTUS3[0:CACTUS_HEIGHT-1];

  // Initialize sprite data
  initial begin
    // Initialize CACTUS0
    CACTUS0[0]  = 15'h01c0;
    CACTUS0[1]  = 15'h03e0;
    CACTUS0[2]  = 15'h03e0;
    CACTUS0[3]  = 15'h23e0;
    CACTUS0[4]  = 15'h73e2;
    CACTUS0[5]  = 15'h73e7;
    CACTUS0[6]  = 15'h73e7;
    CACTUS0[7]  = 15'h73e7;
    CACTUS0[8]  = 15'h73e7;
    CACTUS0[9]  = 15'h73e7;
    CACTUS0[10] = 15'h73e7;
    CACTUS0[11] = 15'h73e7;
    CACTUS0[12] = 15'h73e7;
    CACTUS0[13] = 15'h73e7;
    CACTUS0[14] = 15'h73e7;
    CACTUS0[15] = 15'h7fe7;
    CACTUS0[16] = 15'h3fe7;
    CACTUS0[17] = 15'h1fff;
    CACTUS0[18] = 15'h03fe;
    CACTUS0[19] = 15'h03fc;
    CACTUS0[20] = 15'h03e0;
    CACTUS0[21] = 15'h03e0;
    CACTUS0[22] = 15'h03e0;
    CACTUS0[23] = 15'h03e0;
    CACTUS0[24] = 15'h03e0;
    CACTUS0[25] = 15'h03e0;
    CACTUS0[26] = 15'h03e0;
    CACTUS0[27] = 15'h03e0;
    CACTUS0[28] = 15'h03e0;
    CACTUS0[29] = 15'h03e0;
    CACTUS0[30] = 15'h03e0;
    CACTUS0[31] = 15'h03e0;
    CACTUS0[32] = 15'h03e0;

    // Initialize CACTUS1
    CACTUS1[0]  = 15'h01c0;
    CACTUS1[1]  = 15'h03e0;
    CACTUS1[2]  = 15'h03e0;
    CACTUS1[3]  = 15'h23e0;
    CACTUS1[4]  = 15'h73e0;
    CACTUS1[5]  = 15'h73e0;
    CACTUS1[6]  = 15'h73e0;
    CACTUS1[7]  = 15'h73e2;
    CACTUS1[8]  = 15'h73e7;
    CACTUS1[9]  = 15'h73e7;
    CACTUS1[10] = 15'h73e7;
    CACTUS1[11] = 15'h73e7;
    CACTUS1[12] = 15'h73e7;
    CACTUS1[13] = 15'h73e7;
    CACTUS1[14] = 15'h73e7;
    CACTUS1[15] = 15'h73e7;
    CACTUS1[16] = 15'h73e7;
    CACTUS1[17] = 15'h73e7;
    CACTUS1[18] = 15'h73e7;
    CACTUS1[19] = 15'h73e7;
    CACTUS1[20] = 15'h3fe7;
    CACTUS1[21] = 15'h1fe7;
    CACTUS1[22] = 15'h0fff;
    CACTUS1[23] = 15'h03fe;
    CACTUS1[24] = 15'h03fc;
    CACTUS1[25] = 15'h03e0;
    CACTUS1[26] = 15'h03e0;
    CACTUS1[27] = 15'h03e0;
    CACTUS1[28] = 15'h03e0;
    CACTUS1[29] = 15'h03e0;
    CACTUS1[30] = 15'h03e0;
    CACTUS1[31] = 15'h03e0;
    CACTUS1[32] = 15'h03e0;

    // Initialize CACTUS2
    CACTUS2[0]  = 15'h01c0;
    CACTUS2[1]  = 15'h03e0;
    CACTUS2[2]  = 15'h03e0;
    CACTUS2[3]  = 15'h03e0;
    CACTUS2[4]  = 15'h03e2;
    CACTUS2[5]  = 15'h03e7;
    CACTUS2[6]  = 15'h03e7;
    CACTUS2[7]  = 15'h03e7;
    CACTUS2[8]  = 15'h23e7;
    CACTUS2[9]  = 15'h73e7;
    CACTUS2[10] = 15'h73e7;
    CACTUS2[11] = 15'h73e7;
    CACTUS2[12] = 15'h73e7;
    CACTUS2[13] = 15'h73e7;
    CACTUS2[14] = 15'h73e7;
    CACTUS2[15] = 15'h73ff;
    CACTUS2[16] = 15'h73fe;
    CACTUS2[17] = 15'h73fc;
    CACTUS2[18] = 15'h73e0;
    CACTUS2[19] = 15'h7fe0;
    CACTUS2[20] = 15'h3fe0;
    CACTUS2[21] = 15'h1fe0;
    CACTUS2[22] = 15'h03e0;
    CACTUS2[23] = 15'h03e0;
    CACTUS2[24] = 15'h03e0;
    CACTUS2[25] = 15'h03e0;
    CACTUS2[26] = 15'h03e0;
    CACTUS2[27] = 15'h03e0;
    CACTUS2[28] = 15'h03e0;
    CACTUS2[29] = 15'h03e0;
    CACTUS2[30] = 15'h03e0;
    CACTUS2[31] = 15'h03e0;
    CACTUS2[32] = 15'h03e0;

    // Initialize CACTUS3
    CACTUS3[0]  = 15'h01c0;
    CACTUS3[1]  = 15'h03e0;
    CACTUS3[2]  = 15'h03e0;
    CACTUS3[3]  = 15'h03e0;
    CACTUS3[4]  = 15'h33e2;
    CACTUS3[5]  = 15'h7be7;
    CACTUS3[6]  = 15'h7be7;
    CACTUS3[7]  = 15'h7be7;
    CACTUS3[8]  = 15'h7be7;
    CACTUS3[9]  = 15'h7be7;
    CACTUS3[10] = 15'h7be7;
    CACTUS3[11] = 15'h7be7;
    CACTUS3[12] = 15'h7fe7;
    CACTUS3[13] = 15'h7fe7;
    CACTUS3[14] = 15'h3fe7;
    CACTUS3[15] = 15'h1fe7;
    CACTUS3[16] = 15'h03e7;
    CACTUS3[17] = 15'h03ff;
    CACTUS3[18] = 15'h03fe;
    CACTUS3[19] = 15'h03fc;
    CACTUS3[20] = 15'h03e0;
    CACTUS3[21] = 15'h03e0;
    CACTUS3[22] = 15'h03e0;
    CACTUS3[23] = 15'h03e0;
    CACTUS3[24] = 15'h03e0;
    CACTUS3[25] = 15'h03e0;
    CACTUS3[26] = 15'h03e0;
    CACTUS3[27] = 15'h03e0;
    CACTUS3[28] = 15'h03e0;
    CACTUS3[29] = 15'h03e0;
    CACTUS3[30] = 15'h03e0;
    CACTUS3[31] = 15'h03e0;
    CACTUS3[32] = 15'h03e0;
  end

  logic active_q;  // Indicates if the cactus is active

  always @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      cactus_x_q     <= SCREEN_WIDTH;
      cactus_image_q <= 2'b00;
      active_q       <= 1'b0;  // Inactive at reset
    end else if (next_frame_i) begin
      if (active_q) begin
        if (cactus_x_q <= CACTUS_SPEED) begin
          // Cactus has moved off-screen
          active_q <= 1'b0;  // Deactivate cactus
        end else begin
          // Move cactus left
          cactus_x_q <= cactus_x_q - CACTUS_SPEED;
        end
      end else begin
        // Cactus is inactive
        if (spawn_i) begin
          // Spawn new cactus
          cactus_x_q     <= SCREEN_WIDTH;
          cactus_image_q <= rand_i;
          active_q       <= 1'b1;  // Activate cactus
        end
      end
    end
  end



  // Determine if current pixel is within cactus bounds
  wire pixel_x_in_range = (pixel_x_i >= cactus_x_q) && (pixel_x_i < (cactus_x_q + CACTUS_WIDTH));
  wire pixel_y_in_range = (pixel_y_i >= GROUND_Y) && (pixel_y_i < (GROUND_Y + CACTUS_HEIGHT));
  wire pixel_in_range = active_q && pixel_x_in_range && pixel_y_in_range;

  // Calculate ROM indices
  wire [5:0] rom_x = pixel_x_i - cactus_x_q;
  wire [5:0] rom_y = pixel_y_i - GROUND_Y;

  // Retrieve the appropriate line from the cactus image
  logic [14:0] cactus_line;
  always_comb begin
    if (pixel_in_range) begin
      case (cactus_image_q)
        2'b00:   cactus_line = CACTUS0[rom_y];
        2'b01:   cactus_line = CACTUS1[rom_y];
        2'b10:   cactus_line = CACTUS2[rom_y];
        2'b11:   cactus_line = CACTUS3[rom_y];
        default: cactus_line = 15'h0000;
      endcase
    end else begin
      cactus_line = 15'h0000;
    end
  end

  // Output pixel value based on the selected image
  assign pixel_o = pixel_in_range ? cactus_line[CACTUS_WIDTH-1-rom_x] : 1'b0;

endmodule
