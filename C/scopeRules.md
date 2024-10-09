# Scope Rules in C;

> The **scope** of a variable in C is the **block** or the region in the
  program where a variable is declared, defined and used. Outside this
  region, we cannot access the variable, and it is treated as an undeclared
  identifier.

-> The scope is the area under which a variable is visible.
-> The scope of an identifier is the part of the program where the identifier 
	may directly be accessible.

-> We can only refer to a variable in its scope.
-> In C, all identifiers are lexically(or statically) scoped.


```C

#include <stdio.h>

int main(void)
{
	// scope of this variable is within main() function only.
	int var = 34;

	printf("%d",var);
	return 0;
}

// function where we try to access the var defined in main()
void func() { printf("%d",var); }
```

**Output**

```
solution.c: In function 'func':
solution.c:15:28: error: 'var' undeclared (first use in this function)
 void func() { printf("%d", var); }
```

Here, we tried to access variable names **var** As we can see that if we try to
refer to the variable outside its scope, we get the above error.


# **Types of Scope Rules in C**

> **C scope rules** can be covered under the following two categories:

1. **Global Scope.**
2. **Local Scope.**


# **Global Scope in C**

The **global scope** refers to the region outside any **block or function**.

* The Variables declared in the global scope are called global variables.
* Global variables are visible in every part of the program.
* Global is also called **File scope** as the scope of an identifier starts at
  the beginning of the file and ends at the end of the file.

```C
#include <stdio.h>
#include <stdlib.h>

int global = 10;

void display()
{
	printf("%d\n",global);
}

int main(void)
{
	int var = 10;

	display();

	// global = 1337;
	printf("The changed value of global is: %d\n",global);
	global = 404;
	display();
	printf("The value of the local scope variable is: %d\n",var);

	return 0;
}
```

**Linkage of Variables in Global Scope**

> **Global Variables** have external linkage by default. It means that the 
  variables declared in the global scope can be accessed in another C source
  file.

```C
// Filename: file1.c

#include <stdio.h>
// defining a global variable.
int a = 1001;

// Define the function to use the global variable.
void myfunc()
{
	printf("%d\n",a);
}

```

```C

// Filename: main.c

#include <stdio.h>
#include <stdlib.h>

// Declare the external variable and function
extern int a;
void myfunc();

int main(void)
{
	// Initiate the global variable.
	a = 1337;

	// call the function to print the value of 'a'.
	myfunc();

	return 0;
}

```

 Note: `To restrict access to the current file only, global variables can be 
        marked as static.`



# **Local Scope in C**

The **local scope** refers to the region inside a block or a function. It is 
the space enclosed between the **{}** braces.

* The variables declared within the local scope are called **local variables**.
* Local variables are visible in the block they are declared in and other 
  blocks nested inside that block.
* Local scope is also called **Block Scope**.
* Local Variable have no linkage.

```C
// C program to illustrate the local scope
#include <stdio.h>

// Driver Code
int main()
{
    {
        int x = 10, y = 20;
        {
            // The outer block contains
            // declaration of x and
            // y, so following statement
            // is valid and prints
            // 10 and 20
            printf("x = %d, y = %d\n", x, y);
            {
                // y is declared again,
                // so outer block y is
                // not accessible in this block
                int y = 40;

                // Changes the outer block
                // variable x to 11
                x++;

                // Changes this block's
                // variable y to 41
                y++;

                printf("x = %d, y = %d\n", x, y);
            }

            // This statement accesses
            // only outer block's
            // variables
            printf("x = %d, y = %d\n", x, y);
        }
    }
    return 0;
}

```

**Output:**

```
x = 10, y = 20
x = 11, y = 41
x = 11, y = 20
```


> **This is a also an example of local block.**

```C
// C program to illustrate scope of variables

#include<stdio.h>

int main()
{
    // Initialization of local variables
    int x = 1, y = 2, z = 3;

    printf("x = %d, y = %d, z = %d\n",
    x, y, z);
    {

        // changing the variables x & y
        int x = 10;
        float y = 20;
        
        printf("x = %d, y = %f, z = %d\n",
        x, y, z);
        {

            // changing z
            int z = 100;
            printf("x = %d, y = %f, z = %d\n",
            x, y, z);
        }
    }
    return 0;
}

```

**Output**

```C
x = 1, y = 2, z = 3
x = 10, y = 20.000000, z = 3
x = 10, y = 20.000000, z = 100

```