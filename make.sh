#!/bin/bash

set -ex

echo Building RunServer
go install

echo Compiling runner and compiler
g++ ./Cjudger/runner.cc -o runner
g++ ./Cjudger/compiler.cc -o compiler
mv -f runner compiler $GOPATH/bin

echo Building similarity test
cd sim/sim_2_89
make binaries 
chmod +x sim_c sim_java sim_text ../sim.sh
cp sim_c sim_java sim_text ../sim.sh $GOPATH/bin
make fresh

echo Success
