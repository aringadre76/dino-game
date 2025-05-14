
module basys3_7seg_driver (
    input  logic       clk_1k_i,     // 1 kHz clock signal
    input  logic       rst_ni,       // Active-low reset signal
    input  logic [3:0] digit0_en_i,  // Enable signal for digit 0
    input  logic [3:0] digit0_i,     // Value for digit 0
    input  logic [3:0] digit1_en_i,  // Enable signal for digit 1
    input  logic [3:0] digit1_i,     // Value for digit 1
    input  logic [3:0] digit2_en_i,  // Enable signal for digit 2
    input  logic [3:0] digit2_i,     // Value for digit 2
    input  logic [3:0] digit3_en_i,  // Enable signal for digit 3
    input  logic [3:0] digit3_i,     // Value for digit 3
    output logic [3:0] anode_o,      // Anode signals
    output logic [6:0] segments_o    // Segment signals
);

  logic [6:0] segmentVal;
  logic [3:0] digitVal;

  hex7seg hex_decoder (
      .d3(digitVal[3]),
      .d2(digitVal[2]),
      .d1(digitVal[1]),
      .d0(digitVal[0]),

      .A(segmentVal[0]),
      .B(segmentVal[1]),
      .C(segmentVal[2]),
      .D(segmentVal[3]),
      .E(segmentVal[4]),
      .F(segmentVal[5]),
      .G(segmentVal[6])
  );

  logic seg_en;

  always_comb begin
    anode_o  = state_q;  // Changed from ring_q to state_q
    seg_en   = 0;
    digitVal = 0;
    if (state_q == 4'b1110) begin  // Changed from ring_q to state_q
      anode_o[0] = ~digit0_en_i;
      digitVal = digit0_i;
      seg_en = digit0_en_i;
    end else if (state_q == 4'b1101) begin  // Changed from ring_q to state_q
      anode_o[1] = ~digit1_en_i;
      digitVal = digit1_i;
      seg_en = digit1_en_i;
    end else if (state_q == 4'b1011) begin  // Changed from ring_q to state_q
      anode_o[2] = ~digit2_en_i;
      digitVal = digit2_i;
      seg_en = digit2_en_i;
    end else if (state_q == 4'b0111) begin  // Changed from ring_q to state_q
      anode_o[3] = ~digit3_en_i;
      digitVal = digit3_i;
      seg_en = digit3_en_i;
    end
  end

  assign segments_o = seg_en ? ~segmentVal : 8'hff;

  logic [3:0] state_q, state_d;

  // Create the next state value
  assign state_d = {state_q[2:0], state_q[3]};

  always_ff @(posedge clk_1k_i) begin
    if (!rst_ni) begin
      state_q <= 4'b1110;
    end else begin
      state_q <= state_d;
    end
  end

endmodule
