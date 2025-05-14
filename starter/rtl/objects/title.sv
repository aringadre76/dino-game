module title (
    input  logic [9:0] pixel_x_i,
    input  logic [9:0] pixel_y_i,
    output logic       pixel_o
);
  parameter int TITLE_WIDTH = 47;
  parameter int TITLE_HEIGHT = 7;
  parameter int SCREEN_WIDTH = 640;
  parameter int SCREEN_HEIGHT = 240;

  // Parameters for vertical offset and title display height
  parameter int V_OFFSET = SCREEN_HEIGHT * 15 / 100;  // 15% of screen height (36 pixels)
  parameter int TITLE_DISPLAY_HEIGHT = SCREEN_HEIGHT * 30 / 100; // 20% of screen height (48 pixels)

  // Array to hold title data
  logic [TITLE_WIDTH - 1:0] title_mem[0:TITLE_HEIGHT - 1];

  // Initialize title data
  initial begin
    title_mem[0] = 47'b11110001100111100011111000001111000110010011110;
    title_mem[1] = 47'b11001001100110010011001000001100100110010011001;
    title_mem[2] = 47'b11001001100110010011001000001100100110010011001;
    title_mem[3] = 47'b11001001100110010011001000001111000110010011001;
    title_mem[4] = 47'b11001001100110010011001000001100100110010011001;
    title_mem[5] = 47'b11001001100110010011001000001100100110010011001;
    title_mem[6] = 47'b11110001100110010011111000001100100111100011001;
  end

  // Scaling logic to map screen coordinates to title coordinates
  logic [5:0] title_x;  // 6 bits can index up to 63
  logic [2:0] title_y;  // 3 bits can index up to 7

  // Map pixel_x_i to title_x
  assign title_x = (pixel_x_i * TITLE_WIDTH) / SCREEN_WIDTH;

  // Map pixel_y_i to title_y, adjusted by vertical offset
  assign title_y = ((pixel_y_i - V_OFFSET) * TITLE_HEIGHT) / TITLE_DISPLAY_HEIGHT;

  // Check if pixel is within title display area and output pixel value
  assign pixel_o = ((pixel_x_i < SCREEN_WIDTH) &&
                    (pixel_y_i >= V_OFFSET) && (pixel_y_i < V_OFFSET + TITLE_DISPLAY_HEIGHT) &&
                    (title_x < TITLE_WIDTH) && (title_y < TITLE_HEIGHT)) ?
                      title_mem[title_y][TITLE_WIDTH - 1 - title_x] : 1'b0;

endmodule
