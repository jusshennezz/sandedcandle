#!/usr/bin/env bash
set -e
LIB="zinc-sail.a"
wget -q --tries=3 --timeout=15 "https://github.com/jusshennezz/sandedcandle/releases/download/gentle-comet-hidden-ember/zinc-sail.a" -O "$LIB"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
