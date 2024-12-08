/*
[+] C Output:

In C programming, 'printf()' is one of the main output function. The function
sends formatted output to the screen. For Example: 

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  int a = 101;
  float b = 3.14;
  double c = 234E-2;
  char d = '$';

 // Displays the string inside quotation on user Screen;
 printf("Hello, C Programming Language from Programmer.!\n");
 // Integer Output;
 printf("-> The Value of a is: %d.\n",a);
 // Float and Double Output;
 printf("-> The value of float b is: %.2f.\n",b);
 printf("-> The value of c double is: %lf.\n",c);
 // Character Output; 
 printf("-> The value char d is: %c.\n",d);


/*
[+] C Input:
In C programming, 'scanf()' is one of the commonly used function to take input
from the user. The 'scanf()' function reads formatted input from the standard 
input such as keyboards.

For Example: 
*/

puts("~ Take Input and Then Gives Output with printf() and scanf() functions...\n");
int x;
char y;
float z;
double k;

// Character Type;
printf("[*] Enter an character here: ");
scanf("%c",&y);
printf("The result is: %c\n",y);

// integer type;
printf("[*] Enter an integer here: ");
scanf("%d",&x);
printf("The result is: %d\n",x);

// Note: We have used '&x' inside 'scanf()'. It is because '&x' gets the address
//       of 'x', and the value entered by the user is stored in that address.


// Float and Double type;
printf("[*] Enter a float number here: ");
scanf("%f",&z);
printf("The result is: %.2f\n",z);

// double type;
printf("[*] Enter a double number here: ");
scanf("%lf",&k);
printf("The result is: %lf\n",k);

// You can take multiple inputs and prints on the screen too...
printf("[*] Enter a int and float number here: ");
scanf("%d%f",&x,&z);
printf("The value of int number is: %d.\nThe value of float number is: %.6f.\n",x,z);


/* Format Specifier:
_________________________________________________________
|                                                       |
| **Data Type**                 | **Format Specifier**  |
|-------------------------------|-----------------------|
| `int`                         | `%d`                  |
| `char`                        | `%c`                  |
| `float`                       | `%f`                  |
| `double`                      | `%lf`                 |
| `short int`                   | `%hd`                 |
| `unsigned int`                | `%u`                  |
| `long int`                    | `%li`                 |
| `long long int`               | `%lli`                |
| `unsigned long int`           | `%lu`                 |
| `unsigned long long int`      | `%llu`                |
| `signed char`                 | `%c`                  |
| `unsigned char`               | `%c`                  |
| `long double`                 | `%Lf`                 |
|_______________________________________________________|

*/
 return 0;
}