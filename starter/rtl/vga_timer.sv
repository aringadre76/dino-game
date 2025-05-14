// Copyright (c) 2024 
// https://vesa.org/vesa-standards/
// http://tinyvga.com/vga-timing

module vga_timer (
    input  logic       clk_i,
    input  logic       rst_ni,
    output logic       hsync_o,
    output logic       vsync_o,
    output logic       visible_o,
    output logic [9:0] position_x_o,
    output logic [9:0] position_y_o
);

  assign visible_o = (position_x_o < 640) & (position_y_o < 480);

  always @(posedge clk_i) begin
    if (!rst_ni) begin
      position_x_o <= 0;
      position_y_o <= 0;
    end else begin
      if (position_x_o < 799) begin
        position_x_o <= position_x_o + 1;
      end else begin
        position_x_o <= 0;
        if (position_y_o < 524) begin
          position_y_o <= position_y_o + 1;
        end else begin
          position_y_o <= 0;
        end
      end
    end
  end

  assign hsync_o = ~((position_x_o >= 656) & (position_x_o < 752));

  assign vsync_o = ~((position_y_o >= 490) & (position_y_o < 492));

endmodule
