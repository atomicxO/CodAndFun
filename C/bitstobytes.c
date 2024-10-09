#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  unsigned char x = 0b10110010;
  unsigned char y = 0b00000000;

  y = (x * 0x0202020202ULL & 0x010884422010ULL) % 1023;

  printf("Original: %d (binary: %08b)\n",x,x);
  printf("Reversed: %d (binary: %08b)\n",y,y);

  return 0;
}
