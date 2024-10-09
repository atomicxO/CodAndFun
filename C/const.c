#include <stdio.h>
#include <stdlib.h>
// enum keyword for constant;
enum VARS {var = 404 };
int func();
// constant #define preprocessor
#define FTOC(f) ((f - 32) * 5.0)/9.0
#define CTOF(c) ((c * 9.0)/5.0) + 32

/* Driver Code */
int main(void)
{
  // Area of Circle: A = π x radius^2
  const float pie = 3.141592653589793;
  float radius,area;
  float temp;
  char temp_mode;

  //User Input for Radius;
  printf("[*] Enter the radius of a Circle: ");
  scanf("%f",&radius);
  area = (radius * radius);
  
  printf("[+] The area of circle is: %.2f.\n",(pie*area)); 

// Macro Shit Happening From Here.
   printf("\n[*] Enter the temperature: ");
   scanf("%f",&temp);

   printf("[*] Convert from (C)elsius or (F)ahrenheit: ");
   scanf(" %c",&temp_mode);

// Condition Shits....!

   if (temp_mode == 'C' || temp_mode == 'c')
   {    
        float fahr = FTOC(temp);
        printf("[+] Temperature in Celsius: %.2f.\n",fahr);
   }
   
   else if(temp_mode == 'F' || temp_mode == 'f')
   {
    float cels = CTOF(temp);
    printf("[+] Temperature in Fahrenheit: %.2f.\n",cels);
   }

   else{
    puts("[X] Wrong Input!\n");
   }

printf("\nThis is a enum constant working....!\n");
    func();

  return 0;
}


/*

# Types of Constants in C;

The type of the constant is the same as the data type of the variables. 
Following the list of the types of constants.

1. Integer Constant.
2. Character Constant.
3. Floating Point Constant.
4. Double Precision Floating Point Constant.
5. Array Constant.
6. Structure Constant.

We just have to add the const keyword at the start of the variable declaration.

[+] Properties of constant in C;

1. Initialization and Declaration at the same time.
2. Immutability - [only initialize only once].


[+] Difference between Constants and Literals

[*] Constants:-

1. Constants are variable that cannot be modified once declared.

2. Constants are defined by using the const keyword in C. They store literal values in
   themselves.

3. We can determine the address of constants.

4. They are lvalues.

5. Example: const int c = 50;

--------------------------

[*] Literals:-

1. Literals are the fixed values that define themselves.

2. They themselves are the values that are assigned to the variables to the variables or
   constants.

3. We cannot determine the address of a literal except string literal.

4. They are rvalues.

5. Example: 24,15,5,'a',"Geeks",etc.


*/


/*

# Defining Constant using #define Preprocessor:

> We can also define a constant in C using '#defing preprocessor'.
  The constants defined using '#define' are macros that behave like a constant.
  These constants are not handled by the compiler.
  They are handled by the preprocessor and are replaced by their value before 
  compilation.

```
#deifine const_name value
```

Note: This method for defining constant is not preferred as it may introduce bugs and
      make the code difficult to maintain.
  
*/

// There is another way that works same like constant as const and define;
// And it is a enum.

/* Code Example: */

int func()
{
  printf("-> The value of enum constant variable is: %d.\n",var);

}
