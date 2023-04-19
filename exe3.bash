#!/bin/bash
file="desktop/exercise3"
if  test -s "$file" 
then 
    echo "found one"
else 
    echo "found none"
fi
