/*[+] Data Types; 

-> In C programming, data types are Declaration for Varaibles.This detemines
   the type and size of data associated with variables.

For Example:

```
int myvariable;
```

Here, 'myvariable' is a variable of 'int' (integer) type. The size of 'int' is '4 bytes' .

[+] Basic types:
```
Type	                    Size (bytes)                    Format Specifier
```
int	                     at least 2, usually 4   	       %d, %i
char	                    1	                              %c
float	                   4 	                             %f
double	                  8	                              %lf
short int	               2 usually     	                 %hd
unsigned int	            at least 2, usually 4	          %u
long int	                at least 4, usually 8	          %ld, %li
long long int	           at least 8	                     %lld,%lli
unsigned long int	       at least 4	                     %lu
unsigned long long int	  at least 8	                     %llu
signed char	             1	                               %c
unsigned char	           1	                               %c
long double	             at least 10, usually 12 or 16   	%Lf
```

1. int
2. float,double.
3. char.
4. void -> is a incomplete type. It means nothing or no type.
5. short and long.
6. signed   -> allows for storage for both positive and negative numbers.
7. unsigned -> allows for storage of only positive numbers.


[+] Derived Data Types;

> Data types that are derived from fundamental data types are 'derived types'.
For Example: 'arrays,pointers,function types, structures, etc.'

1. bool type.
2. enumerated type.
3. complex type.

*/

// [+] You can always check the size of a variable using the sizeof() operator.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 // Using sizeof() operator to see the size of a variable.
 
  int x;
  float y;
  double z;
  char e;
  short int f;
  unsigned int g;
  long int h;
  long long int i;
  unsigned long int j;
  unsigned long long int k;
  signed char l;
  unsigned char m;
  short a;
  long b;
  long long c;
  long double d;

  puts("[x] Size of Data Types in C Programming....!\n");
  printf("[+] size of short = %zu bytes\n", sizeof(a));
  printf("[+] size of long = %zu bytes\n", sizeof(b));
  printf("[+] size of long long = %zu bytes\n", sizeof(c));
  printf("[+] size of long double = %zu bytes\n", sizeof(d));
  printf("[+] size of int  = %zu bytes\n", sizeof(x));
  printf("[+] size of float  = %zu bytes\n", sizeof(y));
  printf("[+] size of double = %zu bytes\n", sizeof(z));
  printf("[+] size of char = %zu bytes\n", sizeof(e));
  printf("[+] size of short int = %zu bytes\n", sizeof(f));
  printf("[+] size of unsigned int = %zu bytes\n", sizeof(g));
  printf("[+] size of long int = %zu bytes\n", sizeof(h));
  printf("[+] size of long long int = %zu bytes\n", sizeof(i));
  printf("[+] size of unsigned long int = %zu bytes\n", sizeof(j));
  printf("[+] size of unsigned long long int = %zu bytes\n", sizeof(k));
  printf("[+] size of signed char = %zu bytes\n", sizeof(l));
  printf("[+] size of unsigned char = %zu bytes\n", sizeof(m));



  


}


