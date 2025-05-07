#!/bin/bash
echo Compiling...
clear
cd /home/cael/Desktop/C/g++/Snad/oop_game/
#g++ -Wall main.cpp logo.cpp map.cpp -o build.sh
g++ ray.cpp -lraylib -o build.sh
sleep 1
./build.sh
clear
