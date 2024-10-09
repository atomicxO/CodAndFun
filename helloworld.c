#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to output hello world using pointers.
void func()
{
  char *str = "[-] Hello, Friend!\n";
  while(*str)
    putchar(*str++);
}

/* Driver Code */
int main(void)
{
  printf("[+] Hello, World!\n");
  puts("[+] Iam C programmer Just Starting Out!\n");
  puts(">> This is pointer used hello world prgram.");
// Another Function;
  func();
// syscall function examples;
write(1,"[-] Hello, Silent Friend!\n",23);

return 0;
}
