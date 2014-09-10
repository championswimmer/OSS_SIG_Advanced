#!/bin/bash

g++ -c -o add.o add.cpp
g++ -c -o sub.o sub.cpp
g++ -c -o mult.o mult.cpp
g++ -c -o div.o div.cpp
g++ -c -o calc.o calc.cpp

g++ *.o -o calc

