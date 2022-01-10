#!/bin/bash
wget -P https://github.com/RayBar72/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/101-falsa.so
export LD_PRELOAD=./101-falsa.so
