#!/bin/bash
set -e
mkdir -p build
cd build
cmake ..
sleep 30
make


