#include<stdio.h>
main()
{
int number, rev_num, next_digit,last_digit;
 
printf ("Enter a three digit number: ");
scanf("%d", &number);
 
last_digit = number - ((number / 10) * 10); /*ONES*/
 
rev_num = last_digit; /*1*/
 
next_digit = (number / 10) - ((number / 100) * 10); /*TENS*/
 
rev_num = (rev_num * 10) + next_digit; /*12*/
 
next_digit = (number / 100) - ((number / 1000) * 10); /*HUNDREDS*/
 
rev_num = (rev_num * 10) + next_digit; /*123*/

 
printf ("Reversed number = %d",rev_num);
}