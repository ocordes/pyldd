#!/bin/bash

for i in $*; do
  ../brick_data_convert.py $i ../brick_data/$i
done
