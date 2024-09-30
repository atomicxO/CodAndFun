#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

printf("[+] You have entered the %d arguments.\n",argc);
	if (argc <= 1)
	{
		printf("[+] Please Input some arguments with program name.\n");
	}else{
		printf("[*] \"Your Argument is\": ");

	for(i = 1; i < argc; ++i)
	{
		printf("%s ",argv[i]);
	}
	}printf("\n");

	return 0;
}