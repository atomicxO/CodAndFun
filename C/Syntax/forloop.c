/*
[+] C For Loop;

> In Programming, a loop is used to repeat a block of code until the specified 
  condition is met.

=> In C programming has three types of loops:

1. for Loop.
2. While Loop.
3. Do...While Loop.

+ The Syntax of the 'for' loop is:

```
for (initializationStatement; testExpression; updateStatement)
{
	// statements inside the body of loop
}
```

This process is goes in until the test expression is false. When the test
expression is false, the loop terminates.

*/

// C program to demonstrate the printing of numbers from 1 to 10.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n,sum=0;

	// For Loop starts from here;
	for(i = 1; i < 11; ++i)
	{
		printf("%d ",i);
	}
	printf("\n");


// C program to calculate the sum of first n natural numbers Positive Numbers 1,2,3 ...n are known as Natural Numbers.
	puts("\n[+] Sum of first n natural number");
	puts("-----------------------------------");
	
	printf("-> Enter a Number here: ");
	scanf("%d",&n);

	if(n <= 0)
	{
		puts("Please Enter Only Natural or Positive Numbers...");
		return 1;
	}
	
	// For Loop Start from here.
	for(i = 1; i <= n; ++i)
	{
		sum += i;
	}

	printf("The Sum of n Natural Number is: %d.\n",sum);

// C program to calculate the factorial of a inputed number.

	// n!=n×(n−1)×(n−2)×⋯×2×1
//5!=5×4×3×2×1=1205!=5×4×3×2×1=120
puts("\n[+] Factorial Number...");
puts("-----------------------------------");
	int num;
	unsigned long long fact = 1;

	printf("-> Enter a Number (Factorial): ");
	scanf("%d",&num);
	
	if(n < 0)
	{
		puts("Please Enter Positive Number here only...");
		return 1;
	}


// For Loop Starts from here.
	for(int i = 1; i <= num; ++i)
	{
		fact *= i;
	}	

	printf("The Factorial is: %llu.\n",fact);

	return 0;
}                                                               