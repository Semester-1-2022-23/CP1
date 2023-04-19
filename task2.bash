#!/bin/bash
sort -n -k 4n -o sorted_expenses.txt expences.csv
read -p "Enter the username you are interest: " username
if grep -wq "$username" sortered_expenses.txt
then
     grep "$username" sortered_expenses.txt | cut -fi -d " " --complement
else
     echo "Error :: User not found"
     exit
fi

echo "Do you want to know how often a certain pattern occurs?"
select answer in Yes No
do
    if [ $answer == 'Yes' ]
        then
            read -p "Which pattern are you interest in" pattern
              grep -o "$pattern" sortered_expenses.txt | wc -l
                  continue
fi
    if [ $answer == 'No' ]
        then
            echo "Bye"
exit
fi
done
