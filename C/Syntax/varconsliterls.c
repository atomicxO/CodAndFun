/* Let's Learn about variables, constants and literals in C programming.  

[+]  Starting with Variables;

-> In Programming, A Variable is a container (storage area) to hold data.

> To indicate the storage area,each variable should be given a unique name (identifier).
> Variable names are just the symbolic representation (means a object that represents) 
  of a memory location.

For Example:

```
int age = 25;
```

So, Here 'age' is a variable of 'int' type and we have assigned an integer value '25' to
it.


-> The mind blowing thing is you can change the variable value after declaring in 
   anytime or anywhere, but the important thing is you need to declare variable to
   change the value of that variable, without declaration no change.

For Example:

```
char ch = 'A';
After this declaration the value of ch is: 'A'.
ch = '$';
Now the Current value of ch is: '$'. 
```

So, This is a variables and that's how create, declare and change the value of a 
variable.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int num = 10;     // Integer Variable

  /*
  num = 3.14;       // Error 1:
  float num = 22.12;    // Error 2:

> These down errors are telling something which is if you changed the variable type 
  (int,float,char,double) once it declared. Then they will throw this errors because
  you can't do this type of things here.

[+] Error 1:
   main.c: In function ‘main’:
main.c:46:33: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
   46 |   printf("The value of num is: %f\n",num);
      |                                ~^    ~~~
      |                                 |    |
      |                                 |    int
      |                                 double
      |                                %d

[+] Error 2:
main.c: In function ‘main’:
main.c:45:9: error: conflicting types for ‘num’; have ‘float’
   45 |   float num = 22.12;
      |         ^~~
main.c:44:7: note: previous definition of ‘num’ with type ‘int’
   44 |   int num = 10;
      |       ^~~
make: *** [<builtin>: main] Error 1
*/ 

printf("-> The Variable value of num variable is: %d.\n",num);


/*
[+] Second Concept: Constants;

-> If you want to define a variable whose value cannot be changed, you can use the 
   'const' keyword. This will create a constant.

For Example:

```
const int a = 100;
```

Notice: We added a keyword const in starting that's its syntax and that's how you 
        declare constant in C programming.

> Let's see in Program.
*/

// 'leet' is symbolic constant here; It's cannot be changed in anywhere in source code. 
const int leet = 1337;

/*
leet = 404;

> This is a error pops when we try to change the value of symbolic constant in C 
  programming or declared constant variable.

main.c:98:6: error: assignment of read-only variable ‘leet’
   98 | leet = 404;
      |      ^
make: *** [<builtin>: main] Error 1

*/

printf("-> The Symbolic constant Message is: %d You are Elite.\n\n",leet);


/*
[+] Literals;

-> Literals are data used for representing fixed values. They can be used directly in
   the code. For Example: '1', '2.5', 'c' etc.

Here, '1','2.5' and 'c' are literals.

[+] There are five literals in C programming right now: 

1. Integers

> An integer is a numeric literal(associated with numbers) without any fractioncal or
  exponential part.
  There are three types of integer literals in C programming.

1. decimal (base 10).
2. octal (base 8).
3. Hexadecimal (base 16).

For Example: 

```
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
```
In C programming, octal starts with a 0, and hexadecimal starts with a 0x.


2. Floating-Point Literals

> A floating-point literal is a numeric literal that has either a fractional form or an
  exponential form. For Example:

```
-2.0
0.0000234
-0.22E-5
```
Note: E-5 = 10-5

3. Characters 

> A character literal is created by enclosing a single character inside single 
  quotation marks. 
For example: 'a', 'm', 'F', '2', '}' etc.

4. String Literals

> A String literal is a sequence of characters enclosed in double quotes marks.
For Example: 

```
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline
```

5. Escape Sequences

> Sometimes, it is necessary to use characters that cannot be typed or has special 
  meaning in C programming. For example: newline(enter), tab, question mark etc.

In order to use these characters, escape sequences are used.

Escape Sequences	Character
\b	              Backspace
\f	              Form feed
\n	              Newline
\r	              Return
\t	              Horizontal tab
\v	              Vertical tab
\\	              Backslash
\'	              Single quotation mark
\"	              Double quotation mark
\?	              Question mark
\0	              Null character

For example: '\n' is used for a newline. 
             The backslash '\' causes escape from the normal way the characters are 
             handled by the compiler.
*/

// Literals and their data format;
int a = 0;
int b = 077;
int c = 0xc7f;
float d = -2.0;
double e = 0.0000234;
float f = -0.22E-5;
char cha = 'a';
char *str = "This is a String.";

printf("-> Integet Literal: %d\n",a);
printf("-> Integer Literal in Octal Format: %d\n",b);
printf("-> Integer Literal in Hexadecimal Format: %d\n",c);
printf("-> Floating-point Literal with signed style: %f\n",d);
printf("-> Floating-point Literal: %lf\n",e);
printf("-> Floating-point Literal Exponential Way: %f\n",f);
printf("-> Character: %c\n",cha);
printf("-> String Literal: %s\n",str);

puts("\n[+] Experiment of Escape Sequence...");
printf("-> \"I\tLove\tProgramming\fin\t\'C\'\"!\r\?\\v\b\n");

return 0;
}
