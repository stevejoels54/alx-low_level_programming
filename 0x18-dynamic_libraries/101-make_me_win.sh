#!/bin/bash
gcc -shared -o lib* -fPIC <<EOF
export LD_PRELOAD=$PWD/lib*
