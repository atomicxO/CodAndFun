/* C program to demonstrate the character to ASCII value; */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char ch;

  printf("[*] Enter a character here: ");
  scanf("%c",&ch);
  // Displaying the ASCII value here;
  printf("-> ASCCI Value of '%c' is: %d\n",ch,ch);

  return 0;
}
