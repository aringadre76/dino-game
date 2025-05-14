# Lab 6: Dino Game on Basys3

## Overview
This project implements a simplified version of the Chrome Dinosaur Game on a Basys3 FPGA board. It includes modules for the dinosaur character, obstacles (cacti and birds), title screen, and display drivers.

## Assignment
Refer to `assignment.pdf` for detailed specifications and requirements.

## Directory Structure
```
/            Project root
├── assignment.pdf           # Lab assignment specification
├── README.md                # This file
└── starter/                 # Starter code and resources
    ├── dv/                  # Verification testbenches and lint rules
    │   ├── lint/            # Verible and Verilator lint configurations
    │   ├── *.sv             # SystemVerilog testbenches
    │   └── gif_writer.cpp   # Testbench helper for waveform GIF
    ├── images/              # Source PNG images for game sprites
    ├── obstacle_tb_gls_dir  # Gate-level simulation build artifacts
    ├── obstacle_tb_sim_dir  # Behavioral simulation build artifacts
    ├── rtl/                 # RTL source files
    │   ├── basys3/          # Basys3 board-specific drivers and primitives
    │   └── objects/         # Game object modules (dino, cactus, bird, title)
    ├── scripts/             # Python scripts for image conversion and ROM generation
    └── synth/               # Synthesis scripts and constraints
        ├── basys3/          # Vivado TCL scripts and XDC constraints
        └── yosys_common/    # Yosys synthesis flow scripts
``` 

## Prerequisites
- Python 3.x
- Verilator
- Verible (verible-verilog-lint)
- Yosys
- Vivado (for Basys3 synthesis)
- GNU Make (optional)

## Generating Image ROMs
1. Place PNG files in `starter/images/`.
2. Run:
   ```
   python starter/scripts/generate_image_rom.py
   python starter/scripts/convert_filelist.py
   ```
This converts images into Verilog ROM modules under `rtl/objects/`.

## Simulation
### Behavioral Simulation
Use your simulator of choice (e.g., Verilator or ModelSim) to run testbenches in `starter/dv/`:
```bash
cd starter/dv
# Example with Verilator
verilator --cc obstacle_tb.sv --exe obstacle_tb.cpp --build
obj_dir/Vobstacle_tb
```

### Linting
Run lint rules:
```bash
verible-verilog-lint --rules_file dv/lint/verible.lint *.sv
verilator --lint-only dv/*.sv
```

## Gate-Level Simulation
Gate-level simulation artifacts are in `starter/obstacle_tb_gls_dir/` and `starter/title_tb_gls_dir/`. To run:
```bash
cd starter/obstacle_tb_gls_dir
./Vobstacle_tb
```

## Synthesis
### Vivado (Basys3)
```bash
vivado -mode batch -source starter/synth/basys3/vivado.tcl
```
### Yosys
```bash
yosys -c starter/synth/yosys_common/yosys.tcl
```

## Programming the Board
Use the generated bitstream in `synth/basys3/build/` and program your Basys3 board via Vivado.

## Contact
For questions or issues, please refer to the assignment document or contact the TA. 