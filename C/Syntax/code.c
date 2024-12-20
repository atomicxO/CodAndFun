/* C program to demonstrate the Fibonacci Sequence numbers...*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  long long a,b,result;

if(n <= 0)
{
printf("Enter a Positive Number!\n");
}else{
if(n >= 1){
printf("%lld\n",a);
} 

if(n >= 2)
{
printf("%lld\n",b);
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
