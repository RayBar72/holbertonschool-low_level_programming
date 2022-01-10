#!/bin/bash
wget -q -O /./101-falsa.so https://github.com/RayBar72/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/101-falsa.so
export LD_PRELOAD=/ ./101-falsa.so
