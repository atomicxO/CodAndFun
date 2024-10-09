/* CMU CS 1 Lecture Code;*/
#include <stdio.h>
#include <stdlib.h>

// Function to do a square of Inputed Number.
int sq(int x)
{
	return x*x;
}

// Driver code;
int main(int argc, char *argv[]){
/* argc = number of arguments passed when we execute program (integer)including the program name.*/
/* argv = list of arguments we passed when we executed program (array). It is an array of character pointer listing to all the arguments.*/

	int i;
	for(i = 1; i < argc; ++i)
	{
		int x = atoi(argv[i]);
/* The atoi() function converts a character string to an integer value.*/
		int sx = sq(x);
		printf("sq(%d) = %d\n",x,sx);
	}

	return 0;
}