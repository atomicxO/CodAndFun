/* # Simple program to demonstrate the use of identifiers in C programming language.*/
#include <stdio.h>
#include <stdlib.h>

// Here student identifier is used to refer the below structure.
struct _student{
	int id;
	int class;
	char section;
};

// isEven identifier is used to call the below function
int iseven(int num)
{
	if (num % 2 == 0)
	{
		printf("> %d is an Even Number.\n",num);
	}else{
		printf("> %d is not an even it's an Odd Number.\n",num);
	}
}

int main(void)
{
	int stdntAge = 17;
	double Marks = 349.50;
	int n;

	printf("[*] Enter a Number Input: ");
	scanf("%d",&n);
// Calling a Function;
	iseven(n);

  return 0;
}
