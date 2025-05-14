
yosys -import

read_verilog -sv -icells synth/yosys_common/build/rtl.sv2v.v

prep
opt
stat
write_verilog -noexpr -noattr -simple-lhs synth/yosys_common/build/synth.v
