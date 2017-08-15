#!/bin/sh

qmake
make
./remove_unused.sh
mv lib* ~/lib