/* C Programming Operators 

> An operator is a symbol that operates on a value or a variable. 
  For Example: '+' is an operator to perform addition.

[+] Arthimetic Operators:

> An arthimetic operator performs mathematical operations such as addition,subtraction,
  multiplication,division etc on numerical values (constant and variables).


Operator	Description	        Example	          Result
+	        Addition	          a + b	            Adds a and b
-	        Subtraction	        a - b	            Subtracts b from a
*	        Multiplication	    a * b	            Multiplies a and b
/	        Division	          a / b	            Divides a by b
%	        Modulus (Remainder)	a % b	            Gives remainder when a is divided by b

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  int a,b;

  printf("Enter a First Number: ");
  scanf("%d",&a);
  printf("Enter a Second Number: ");
  scanf("%d",&b);
  
puts("\nArthimetic Operators");
  // addition
  printf("%d + %d = %d\n",a,b,(a+b));
  // subtraction
  printf("%d - %d = %d\n",a,b,(a-b));
  //multiplication
  printf("%d x %d = %d\n",a,b,(a*b));
  //division
  printf("%d / %d = %d\n",a,b,(a/b));
  //modulus(remainder)
  printf("%d %% %d = %d\n",a,b,(a%b));

  // Delay 1.2s
  sleep(1.2);


/*
[+] C Increment and Decrement Operators

> C programming has two operators increment '++' and decrement '--' to change the value
  of an operand (constant or variable) by 1.

> These are unqry Operators, meaning they only operate on a single operand.
  Increment '++' increase the value by 1 and Decrement '--' decrease the value by 1.

*/

// Working of increment and decrement operators
    int e = 10, f = 100;
    float c = 10.5, d = 100.5;

    // Pre-Increment and Pre-Decrement.
    puts("\nPreFix");
    printf("++a = %d \n", ++e);
    printf("--b = %d \n", --f);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    // Post-Increment and Post-Decrement.
    puts("\nPostFix");
    printf("a++ = %d \n", e++);
    printf("b-- = %d \n", f--);
    printf("c++ = %f \n", c++);
    printf("d-- = %f \n", d--);


/* 
[+] C Assignment Operators

> An assignment operator is used for assigning a value to a variable.The most common
  assignmnet operator is '='.

Operator	Description	                Example	  Result
=	        Simple Assignment	          a = b	    Assigns the value of b to a
+=	      Addition Assignment	        a += b	  a = a + b
-=	      Subtraction Assignment	    a -= b	  a = a - b
*=	      Multiplication Assignment	  a *= b	  a = a * b
/=	      Division Assignment	        a /= b	  a = a / b
%=	      Modulus Assignment	        a %= b	  a = a % b

*/

