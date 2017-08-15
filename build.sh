#!/bin/sh

./clean.sh
qmake
make
./remove_unused.sh