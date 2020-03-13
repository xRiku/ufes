#!/bin/bash

i=0
while [ $i -lt 10]
    do
        ./test 1000000
        i=[$i+1]
    done