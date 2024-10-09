#include <stdio.h>
#include <stdlib.h>
#include "sprextern.c"

extern int a;  // we took the function from main.c 
void func();  // declare the function which prints thing on the screen.

int main(void)
{
  a = 1337;   // initialise the global variable.
  func();     // call the function that prints the value of the global variable.
  
  return 0;
}

