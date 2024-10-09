// C program to demonstrate the sum of two integers;
#include <stdio.h>
#include <stdlib.h>
// Function Declarations;
int func(int a, int b);

/* Driver Code */
int main(void)
{
  int num1, num2,total;

  printf("[*] Enter a First Integer: "); 
  scanf("%d",&num1);
  printf("[*] Enter a Second Integer: ");
  scanf("%d",&num2);
// Function call;
  total = func(num1,num2);
// summing the two integer here....! 
  printf("[+] The sum of %d and %d is: %d.\n",num1,num2,total);

  return 0;
}

// Function Definition;
int func(int a, int b)
{
  return a + b;
}

