!#/bin/bash
if $# == 3
then
case $2 
+) let n=$1+$3;;
-) let n=$1-$3;;
/) let n=$1/$3;;
x|X) let n=$1*$3;;
echo Answer is $n
else
echo "Usage - $0 value1 operator value2"
echo "value1 and value2 are numeric values"
fi
