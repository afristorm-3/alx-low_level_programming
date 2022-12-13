#!/bin/bash
wget -P /tmp https://raw.github.com/afristorm-3/alx-low_level_programming/master/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so 
