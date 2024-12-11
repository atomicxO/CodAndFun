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

puts("\nAssignment Operator");
int _a, _b;

printf("Enter a Number here: ");
scanf("%d",&_a);

//Assignment Operator;
_b = _a;
printf("\n(A Assigning '=' B) = %d\n",_b);
_b += _a;
printf("(B '+=') = %d\n",_b);
_b -= _a;
printf("(B '-=') = %d\n",_b);
_b *= _a;
printf("(B '*=') = %d\n",_b);
_b /= _a;
printf("(B '/=') = %d\n",_b);
_b %= _a;
printf("(B '%%=') = %d\n",_b);


/*
Explaining the process of a += 5; and a = 3;
so , it goes like this..
step 1: a += 5; if a = 3;
step 2: a = a + 5;
step 3: a = 3 + 5;
step 4: a = 8.

-> So, the Final result is 8.

*/


/*
[+] C Relational Operator

> A relational operator checks the relationship between two operands.
  If the relation is true, it returns is '1';
  If the relation is false, it returns is '0';
  They are mostly used in 'Decision Making' and 'Loops'.


Operator	    Description	                Example	                            Result
==	          Equal to	                  a == b                            	true if a is equal to b, else false
!=	          Not equal to	              a != b                            	true if a is not equal to b, else false
>	            Greater than	              a > b	                              true if a is greater than b, else false
<	            Less than	                  a < b	                              true if a is less than b, else false
>=	          Greater than or equal to	  a >= b	                            true if a is greater than or equal to b, else false
<=	          Less than or equal to	      a <= b	                            true if a is less than or equal to b, else false

*/

int x = 10, y = 20, z = 30;
puts("\nRelational Operator");
printf("[+] The value of X,Y and Z is: X : %d,\tY : %d,\tZ : %d.\n\n",x,y,z);
// Using the '==' (Equal to) operator
if(x == y)
{
  puts("\nx is equal to y.");
}else{
  puts("x is not equal to y.");
}

// using the '!=' (Not equal to) operator
if(x != y)
{
  puts("x is not equal to y.");
}else{
  puts("x is equalto y");
}

// using the '>' (Greater than) Operator
if(y > x)
{
  puts("Y is Greater than to x.");
}else{
  puts("Y is not Greater than to x.");
}

// using the '<' (Less than) Operator
if(x < y){
  puts("X is less than to y.");
}else{
  puts("X is not less than to y.");
}

// using the '>=' (Greater than equal to) Operator
if(z >= y)
{
  puts("Z is Greater than and Equal to Y.");
}else{
  puts("Z is not Greater than and Equal to Y.");
}

// using the '<=' (Less than equal to) Operator
if(x <= z)
{
  puts("X is Less than and Equal to Z.");
}else{
  puts("X is Not Less than and Equal to Z.");
}

/*
[+] Logical Operators in C;

> An expression containing logical operator returns either '0' or '1' 
  depending upon whether expression results 'true or false'.
  Logical operators are commonly used in decision making in C programming.

Operator	Description	    Example	        Result
&&	      Logical AND	    a && b	        true if both a and b are true, else false
||	      Logical OR      a || b          true if a or b are true, else both or one of them are not true then it goes false. 
!	        Logical NOT	    !a	            true if a is false, false if a is true
*/

puts("\nLogical Operators");
int land = 5, lor = 5, lnot = 10,result;
printf("[+] The value of land = %d lor = %d lnot = %d.\n\n",land,lor,lnot);
// Logical AND;
result = (land == lor) && (lnot > land);
printf("(land == lor) && (lnot > land) is %d\n",result);

result = (land == lnot) && (lor < land);
printf("(land == lnot) && (lor < land) is %d\n",result);

// Logical OR;
result = (lnot > lor) || (land > lor);
printf("(lnot == lor) || (land > lord) is %d\n",result);

result = (land != lor) || (lnot == land);
printf("(land != lor) || (lnot == land) is %d\n",result);

// Logical NOT;
result = !(land == lor);
printf("!(land == lor) is %d\n",result);

result = !(lnot > 100);
printf("!(lnot > 100) is %d\n",result);


/* 
[+] Bitwise Operators in C programming

> During computation, mathematical operations like: addition,subtraction,
  multiplication,division, etc are converted to bit-level which makes processing
  faster and saves power.

Usage:

> Bitwise Operatores are used in C programming to perform bit-level operations.

Bitwise Operators in C:
Operator	   Name	                Description	                                                                                  Example	                          Result
&	           Bitwise AND	        Compares each bit and returns 1 if both bits are 1, otherwise 0.	                            a & b         Result is 1 only if both bits are 1.
|	           Bitwise OR	          Compares each bit and returns 1 if at least one of the bits is 1, otherwise 0.                  |           Result is 1 only if one of bits are 1.
^	           Bitwise XOR	        Compares each bit and returns 1 if the bits are different, otherwise 0.	                      a ^ b         Result is 1 if bits are different, 0 if the same
~	           Bitwise NOT	        Inverts the bits: changes 1 to 0 and 0 to 1.	                                                ~a	          Inverts all bits of a
<<	         Left Shift	          Shifts bits to the left by a specified number of positions, filling with 0.	                  a << 2        Shifts bits to the left by 2 positions, multiplying by 2^2
>>	         Right Shift	        Shifts bits to the right by a specified number of positions, discarding the rightmost bits.	  a >> 2	      Shifts bits to the right by 2 positions, dividing by 2^2

*/

puts("\nBitwise Operators");
    int j = 12;  // Binary: 1100
    int k = 5;   // Binary: 0101

    printf("[+] The value of j: %d (# Binary representation: 1100) and k: %d (# Binary representation: 0101).\n\n",j,k);
    // Bitwise AND
    if (j & k) {
        printf("Bitwise AND: a & b is true (non-zero)\n");
    } else {
        printf("Bitwise AND: a & b is false (0)\n");
    }

    // Bitwise OR
    if (j | k) {
        printf("Bitwise OR: a | b is true (non-zero)\n");
    } else {
        printf("Bitwise OR: a | b is false (0)\n");
    }

    // Bitwise XOR
    if (j ^ k) {
        printf("Bitwise XOR: a ^ b is true (non-zero)\n");
    } else {
        printf("Bitwise XOR: a ^ b is false (0)\n");
    }

    // Bitwise NOT
    int not_a = ~j; // Inverts all bits of a
    printf("Bitwise NOT: ~a = %d (Inverted bits of a)\n", not_a);

    // Left Shift (Shifting `a` by 2 positions to the left)
    int left_shift = j <<2;  // Binary shift left by 2 (12 becomes 48)
    printf("Left Shift: a << 2 = %d\n", left_shift);

    // Right Shift (Shifting `a` by 2 positions to the right)
    int right_shift = j >>2;  // Binary shift right by 2 (12 becomes 3)
    printf("Right Shift: a >> 2 = %d\n", right_shift);

/* Sizeof Operators in C programming; 

> The 'sizeof' operator in C is used to determine the size (in bytes) of a 
  'data type' or a 'variable'. It is evaluated at compile time and returns a 
  value of type 'size_t'.

[+] Key Points:

> sizeof can be applied to a type or a variable.
> It gives the amount of memory required to store the data.
> The result is typically in bytes.

*/

puts("\nSizeof Operator");

    // Displaying the size of different data types directly using sizeof
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));

    return 0;
}