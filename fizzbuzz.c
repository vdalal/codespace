#include <stdio.h>

/*
Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
For numbers which are multiples of both three and five print “FizzBuzz”.
Ref: https://imranontech.com/2007/01/24/using-fizzbuzz-to-find-developers-who-grok-coding/
*/

int main()
{
 int i = 0;

 for (i=0;i<=100;i++)
 {
  if(i%3==0 && i%5==0)
   printf("%s\n","fizzbuzz");
  else if(i%3==0)
   printf("%s\n","fizz");
  else if(i%5==0)
   printf("%s\n","buzz");
  else
   printf("%d\n",i);
 }

 return 0;
}

