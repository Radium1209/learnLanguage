#!/bin/bash

:<<!
pay attention to blanket
if [ conditon ]
then
    statement
elif
then
    statement
else
    statement
fi
!

count=10

if (($count > 9))
then
    echo "condition is true"
else
    echo "condition is false"
fi

:<<!
integer comparison
-eq - is equal to - if [ "$a" -eq "$b" ]
-ne - is not equal to - if [ "$a" -ne "$b" ]
-gt - is greater than - if [ "$a" -gt "$b" ]
-ge - is greater than or equal to - if [ "$a" -ge "$b" ]
-lt - is less than - if [ "$a" -lt "$b" ]
-le - is less than or equal to - if [ "$a" -ge "$b" ]
< - is less than - (("$a" < "$b"))
<= - is less than or equal to - (("$a" <= "$b"))
> - is greater than - (("$a" > "$b"))
>= - is greater than or equal to - (("$a" >= "$b"))

string comparison
= - is equal to - if [ "$a" = "$b" ]
== - is equal to - if [ "$a" == "$b" ]
!= - is not equal to - if [ "$a" != "$b" ]
< - is less than, in ASCII aoophabetical order - if [[ "$a" < "$b" ]]
> - is greater than, in ASCII aoophabetical order - if [[ "$a" > "$b" ]]
-z - string is null, that is, has zero length
!
