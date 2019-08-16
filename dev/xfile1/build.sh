#!/bin/bash

set -x
set -e

rm -rf rebuilt
cd ./src
make clean

# XXX: change this flag around before the run if the fuzzer image wont work otherwise
#make CFLAGS+="-m32"
make
make install

mkdir ../rebuilt
cp -r lava-install/bin ../rebuilt

cd ..
echo "Binaries built in ./rebuilt"
