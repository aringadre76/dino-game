// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VOBSTACLE_TB__DPI_H_
#define VERILATED_VOBSTACLE_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at dv/obstacle_tb.sv:13:29
    extern int gif_close(void* writer);
    // DPI import at dv/obstacle_tb.sv:12:30
    extern void gif_next_frame(void* writer);
    // DPI import at dv/obstacle_tb.sv:10:33
    extern void* gif_open(const char* filename, int width, int height);
    // DPI import at dv/obstacle_tb.sv:11:30
    extern void gif_write_pixel(void* writer, int x, int y, int r, int g, int b);

#ifdef __cplusplus
}
#endif

#endif  // guard
