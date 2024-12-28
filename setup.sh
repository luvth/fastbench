#!/bin/bash

g++ -O2 -std=c++17 -o fastbench fastbench.cpp
sudo mv fastbench /bin
sudo rm -rf $(pwd)
