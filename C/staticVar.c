// C program to demonstrate the static variable in C programming language.
#include <stdio.h>
#include <stdlib.h>

// Function Declaration;
void func();

// Static Global Variable Declaration;
static int b = 10;

void func()
{
	int a = 30;

printf("-> The value of local variable is: %d.\n",a);
printf("-> The value of static global variable is: %d.\n",b);

	a = a + b;
	b = b + a;


printf("\n[-] Local: %d\n",a);
printf("[+] Static: %d\n",b);

}

// Driver Code;
int main(void)
{
	func();
	func();
	func();
	func();
	func();

	return 0;
}