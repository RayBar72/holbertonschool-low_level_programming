#!/bin/bash
wget -q --output-document=$HOME/101-falsa.so https://github.com/RayBar72/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/101-falsa.so
export LD_PRELOAD=$HOME/101-falsa.so
