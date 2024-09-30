/*
# C Variables:

> A variable in C language is the name associated with some memory location to 
  store data of different types.There are many variables in C depending on the
  scope, storage class, lifetime, type of data they store, etc.


# C variable Syntax:

data_type variable_name = value;		//defining single variable.
data_type variable_name1, variable_name2...; //defining multiple variable.

- data_type: Type of data that a variable can store.
- variable_name: Name of the variable given by the user.
- Value: value assigned to that variable by the user.


# C program to demonstrate the declaration,definition and initialization. */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/* Function Declarations */
// Local Variables in C;
void var_work();
// Global Variables in C;
void global_fun1();
void global_fun2();
// Static variable in C;
int year();
// auto variable in C;

// Driver Code;
int main(void)
{
	// Declaration of a variable.
	int cnst_var;

	printf("> The value of cnst_var is: %d.\n",cnst_var);

	// assigment of a created variable.
	cnst_var = 1337;

	// declaration + definition + initialization.
	int a_var = 200;
	
	printf("-> The value of cnst_var after assigment: %d.\n",cnst_var);
	printf("-> The value of a_var is: %d.\n",a_var);

	puts("\n# Local Variables....!");
	var_work();

	puts("\n# Global Variables...!");
	global_fun1();
	global_fun2();

	puts("\n# Static Variables....!");
	year();

	puts("\n# Static Variables....!");
	uff();
	return 0;
}


/*

# C Variable Types

> The C variables can be classified into the following types:

1. Local Variables.
2, Global Variables.
3. Automatic Variables.
4. Register Variables.
5. Extern Variables.
6. Static Variables.


[+] Learning Variables Types with example codes;	*/


// [1.] Local Variables in C:
// A Local variable in C is a variable that is declared inside a function or a
// block of code, It's scope is limited to the block or function in which it is
// declared. 

void var_work()
{
	int a = 10;		// Local Variable;
	printf("-> The value of a local variable is: %d.\n",a);
}


// [2.] Global Variables in C:
// A Global Variable in C is a variable that is declared outside the function 
// or a block od code. It's scope is the whole program i.e. we can access the
// global variables anywhere in the C program after it is declared.

int x = 127001; // Global Variable

void global_fun1(){printf("-> It's a value of first global variable funciton: %d.\n",x);}
void global_fun2(){printf("-> It's a value of first global variable funciton: %d.\n",x);}


//[3.] Static Variables in C:
// A static variable in C is a variable that is defined using the 'static' keyword.
// It can be defined only once in a C program and its scope depends upon the 
// region where it is declared (can be global or local).
// The default value of static variable is `zero`.


static int sal = 2024;// Global static variable;

int year()
{
	static int sala; // static local variable;

	printf("[+] What a year: ");
	scanf("%d",&sala);

	if(sala == sal)
	{
		puts("-> This is a Current Year Right Now!");
	}else{

		perror("Not Found!");
	}

}



//[4.] Automatic Variable in C
// All the local variables are automatic variables by default. They are also 
// known as auto variables.

void uff()
{
	auto int atit = 3456;

	printf("-> The value of the auto variable is: %d\n",atit);

}
