#!/bin/bash
read -p 'Number of lines in the fragment:' n
declare -a arr

for (( i=0; i<n; i++ ))
do
     read -p 'Enter HTML tag:' tag
     var1=$(echo $tag | grep -Eo "(http|https)://[a-zA-Z0-9./?=_%:-]*")
     var2=$(echo $tag | grep -po "(?<=>)([\w\s]+)(?=<\/)")
     arr+=("$var1,$var2")
done

for 1 in "${arr[0]}"; do echo "$i";
done


