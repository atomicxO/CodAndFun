/* Decision Making with if..else statement in C programming language...

[+] If..Else Statement Demonstration with code example;

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int a;

 printf("-> Enter a Number to verify positive or negative here: ");
 scanf("%d",&a);


 // Decision Making which is greater or which is smaller from a and b inputed number.
 if(a > 0){
  printf("%d is a Positive Number.\n",a);
 }else if(a < 0) {
  printf("%d is Negative Number..\n",a);
 }else{
  printf("The Result is Equals to 0.\n");
 }

/*
[+] If...else Ladder;

> If...else if best for two conditions or true or false but sometimes a choice 
  has to be made from more than 2 possibilities.

  > The if...else ladder allows you to check between  multiple test expressions
  and execute different statements.

*/
int b;

printf("\n-> Enter a Number to check out its range: ");
scanf("%d",&b);

if( b > 100)
{
 printf("%d is Greater than 100.\n",b);
}else if(b >= 50)
{
 printf("%d is Between 50 and 100.\n",b);
}else if(b >= 0){
 printf("%d is Between 0 and 49.\n",b);
}else if(b >= -50){
 printf("%d is Between -50 and -1.\n",b);
}else{ // if(b < -50){
// If al conditions fail, the number must be less than -50.
 printf("%d is Less than -50.\n",b);
}

/*
[+] Nested If...Else

> We will use a nested if...else statement to solve this problem.
*/
int year;

printf("\n-> Enter a Year here: ");
scanf("%d",&year);

// Formula for finding leap year is: year completely divide by 4 and then 100 and 400 that gives you a leap year.
if(year % 4 == 0)
{
 if(year % 100 == 0)
 {
  if(year % 400 == 0)
  {
   printf("%d is a Leap Year.\n",year);
  }else{
   printf("%d is not a Leap Year.\n",year);
  }
 }else{
  printf("%d is a Leap Year.\n",year);
 }
 }else{
  printf("%d is not a Leap Year.\n",year);
 }

 return 0;
}