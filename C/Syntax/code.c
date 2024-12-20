/* C program to demonstrate the Fibonacci Sequence numbers...*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  long long a = 0,b = 1,result;

  printf("Enter a Positive Integer here for Input: ");
  scanf("%d",&n);
  
if(n <= 0)
{
printf("Enter a Positive Number!\n");
}else{
if(n >= 1){
printf("%lld ",a);
} 

if(n >= 2)
{
printf("%lld ",b);
}
}

for(int i = 3; i <= n; ++i)
{
  result = a + b;
  printf("%lld ",result);
  a = b;
  b = result;
}
printf("\n");

return 0;
}  
