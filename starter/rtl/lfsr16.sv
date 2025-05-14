
module lfsr16 (
    input logic clk_i,
    input logic rst_ni,

    input  logic        next_i,
    output logic [15:0] rand_o
);

  logic [15:0] lfsr_q, lfsr_d;
  logic feedback;

  // Taps for a 16-bit LFSR (from the given polynomial: x^16 + x^14 + x^13 + x^11 + 1)
  assign feedback = lfsr_q[15] ^ lfsr_q[13] ^ lfsr_q[12] ^ lfsr_q[10];

  always_ff @(posedge clk_i) begin
    if (!rst_ni) lfsr_q <= 16'h1;  // Reset to a non-zero value, typically 1
    else if (next_i) lfsr_q <= lfsr_d;
  end

  assign lfsr_d = {lfsr_q[14:0], feedback};
  assign rand_o = lfsr_q;

endmodule
