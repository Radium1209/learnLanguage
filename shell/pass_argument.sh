#!/bin/bash

# ./pass_argument.sh A B C
echo $1 $2 $3 '> echo $1 $2 $3'

args=("$@")

echo ${args[0]} ${args[1]} ${args[2]}
# the same as above
# echo $@

# the number of arguments
echo $#

