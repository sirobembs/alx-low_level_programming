#!/bin/bash
gcc *.o -c -fPIC
gcc *.o -shared -Wl, -soname,  -o liball.so
