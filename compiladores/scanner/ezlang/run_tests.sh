#!/bin/bash
EXE=./lab01
IN=in
OUT=out01
for infile in $IN/*.ezl; do
    base=$(basename $infile)
    outfile=$OUT/${base/.ezl/.out}
    echo $infile
    $EXE < $infile | code --diff $outfile -
done