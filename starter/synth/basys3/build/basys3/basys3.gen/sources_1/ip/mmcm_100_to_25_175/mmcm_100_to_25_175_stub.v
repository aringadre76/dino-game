// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.1 (lin64) Build 5076996 Wed May 22 18:36:09 MDT 2024
// Date        : Mon Nov 25 16:26:30 2024
// Host        : aringadre-IdeaPad-Flex-5-14ALC05 running 64-bit Linux Mint 22
// Command     : write_verilog -force -mode synth_stub
//               /home/aringadre/cse100/lab6_2024.11.19.19.10/starter/synth/basys3/build/basys3/basys3.gen/sources_1/ip/mmcm_100_to_25_175/mmcm_100_to_25_175_stub.v
// Design      : mmcm_100_to_25_175
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a35tcpg236-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module mmcm_100_to_25_175(clk_25_175, clk_100)
/* synthesis syn_black_box black_box_pad_pin="clk_100" */
/* synthesis syn_force_seq_prim="clk_25_175" */;
  output clk_25_175 /* synthesis syn_isclock = 1 */;
  input clk_100;
endmodule
