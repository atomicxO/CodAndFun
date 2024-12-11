# Compile Time

> **Compile Time**: This is the time when the program is being compiled by the
                    compiler (before it is executed). 
                    
                    During compile time, the code is converted into 
                    `machine language`,and checks for `syntax errors`, 
                    `type checks`, etc., are performed. It happens once 
                    when you compile your program.

> **Runtime**: This is the time when the program is actually running (executing)
               after being compiled.

               During runtime, the program performs the tasks defined in the 
               code, and actual data is processed.

### For Example To understand this with code:

```C
#include <stdio.h>

int main(void)
{
 int x = 10;   // Variable assignment happens at runtime
 printf("The value of x is: %d\n",x);

 int y = 5 + 3;  // This is a compile-time expression because it's calculated 
                 // by the compiler
 printf("The value of y is: %d\n",y);

 return 0;
}
```

**`The value of 'y' is calculated at compile time because it's a constant expression` (5 + 3) `**.

**`The value of 'x' is assigned at runtime when the program actually runs.`**
Basically,
# **`Runtime is when the program is running and executing the instruction you've written for  performing operations.`**
