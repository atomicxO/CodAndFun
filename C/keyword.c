/*
[+] Keywords in C

Keywords are predefined or reserved words that have special meanings to the 
compiler. These are part of the syntax and cannot be used as idenfitfiers in
the program.

*/

#include <stdio.h>
#include <stdlib.h>

int printo(void)
{
	auto int a = 10;
	return a;
}

int cuntbrk()
{
	puts("[*] Continue");
	int i;
	for(i=1; i<=10; ++i)
	{
		if (i == 8)
		{
			continue;
		}
		if (i > 8)
		{
		puts("[*] Break");
			break;
		}
		printf("> %d\n",i);
	}
	return i;
}

int swtchbrkdefalt(int i)
{

  switch (i) {
    case 1: 
      printf("Case 1.\n");break;
    case 2:
      printf("Case 2.\n");break;
    case 3:
      printf("Case 3.\n");break;
    case 4:
      printf("Case 4.\n");break;
    default:
      printf("Default.\n");break;
  }
}

int cond(int x,int y)
{
	if(x > y)
	{
		return x;
	}else
	{
		return y;
	}
}

// Declaration of Enum;
enum cars{gtr,mustang,supra,dodge,bmw};

// Declaration of Union;
union report{
	int age;
	int marks;
}id;


/* Driver Code */
int main(void)
{
	int n,a,b,i=1;

	int printa = printo();
	printf("[+] The value of auto keyword: %d.\n",printa);
	printf("\n[*] Break and continue keywords...!\n\n");
	printf("-> %d\n",cuntbrk());
	printf("\n[*] conditional cases switch case....!\n\n");
	printf("[*] Enter a Number from 1 to 4: ");
	scanf("%d",&n);
	swtchbrkdefalt(n);
	printf("\n[*] If-else conditions....!!\n\n");
	printf("[*] Enter two numbers for find greater number: ");
	scanf("%d%d",&a,&b);
	printf("[+] Greater number from %d to %d is: %d.\n",a,b,cond(a,b));
	printf("\nDo Statement;\n\n");
	do{
		printf("%d\n",i);
		++i;
	}while(i <= 10);

	printf("\nEnum keyword....!\n\n");
	enum cars favouriate_car;
	favouriate_car = gtr;
	printf("%d\n",favouriate_car);

printf("\n[*] Union Keyword....\n\n");

// The union is a user-defined data type. All data members which are declared under
// the union keyword share the same memory location.
id.age = 32;
id.marks = 56;
printf("[+] Age of a Person = %d\n",id.age);
printf("[+] Total Number of Marks: = %d\n",id.marks);


	return 0;
}
