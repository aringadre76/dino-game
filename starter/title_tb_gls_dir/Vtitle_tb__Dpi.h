// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTITLE_TB__DPI_H_
#define VERILATED_VTITLE_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at dv/title_tb.sv:11:29
    extern int gif_close(void* writer);
    // DPI import at dv/title_tb.sv:10:30
    extern void gif_next_frame(void* writer);
    // DPI import at dv/title_tb.sv:8:33
    extern void* gif_open(const char* filename, int width, int height);
    // DPI import at dv/title_tb.sv:9:30
    extern void gif_write_pixel(void* writer, int x, int y, int r, int g, int b);

#ifdef __cplusplus
}
#endif

#endif  // guard
