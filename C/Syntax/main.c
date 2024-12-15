#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	char ch;
	int n;
	double num,num2,num3;

/* program 1:
	printf("-> Enter a Number for even or odd: ");
	scanf("%d",&num);

	// Decision-Making on Even or Odd.
	if(num % 2 == 0)
	{
		printf("%d is an Even Number.\n",num);
	}else{
		printf("%d is an Odd Number.\n",num);
	}

*/


/*	program 2:

	printf("-> Enter a Character (Vowel or Consonant): ");
	scanf("%c",&ch);


	// Decision-Making on Vowels or Consonants. Like yha ek input nikalna hai OR.
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("%c is a Vowel.\n",ch);
	}else{
		printf("%c is a Consonant.\n",ch);
	}

*/

/*	program 3:

	printf("-> Enter a Three Numbers here: ");
	scanf("%lf %lf %lf",&num,&num2,&num3);

	// Find the Largest numbers between three inputed numbers.
	// Multiple conditions main se hum AND use karte hai.
	if(num > num2 && num > num3){
		printf("%.2f is a Largest from %.2f and %.2f.\n",num,num2,num3);
	}else if(num2 > num && num2 > num3){
		printf("%.2f is a Largest from %.2f and %.2f.\n",num2,num3,num);
	}else if(num3 > num && num3 > num2){
		printf("%.2f is a Largest from %.2f and %.2f.\n",num3,num,num2);
	}else{
		printf("Enter only Integers or Numbers.\n");
	}
*/

// Finding roots of a Quadratic Equation;

/* Program 4:

double a,b,c,d,root1,root2,realpart,imagpart;

	printf("-> Enter a Quadratic Equation (a b c): ");
	scanf("%lf %lf %lf",&a,&b,&c);

	// Discriminant (D).
	d = b * b - 4 * a * c;
	
	// Finding the roots of a quadratic equation;
	if (d > 0){

		root1 = (-b + sqrt(d))/(2 * a);
		root2 = (-b - sqrt(d))/(2 * a);
		printf("The roots are real and different: ");
		printf("Root1 = %.2lf.\nRoot2 = %.2lf.\n",root1,root2);
	
	}else if(d == 0){
			root1 = root2 = -b / (2 * a);
			printf("The roots are real and equal: ");
			printf("Root1 = %.2lf.\nRoot2 = %.2lf.\n",root1,root2);

	}else{

		realpart = -b / ( 2 * a);
		imagpart = sqrt(-d) / (2 * a);
		puts("The roots are complex and different: ");
		printf("Root1 = %.2lf+%.2lfi and Root2 = %.2lf-%.2lfi.\n",realpart,imagpart,realpart,imagpart);
	}
*/


/* Program 5:
int year;

printf("-> Enter a Year here: ");
scanf("%d",&year);

// Finding a Leap Year;
if( year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
{
	printf("%d is a Leap Year.\n",year);
}else{
	printf("%d is not a Leap Year.\n",year);
}

*/


/* Program 6:
printf("-> Enter a Number here (Verification Positive Or Negative): ");
scanf("%d",&n);

// Finding Positive or Negative number in input by user.
if(n > 0){
	printf("%d is a Positive Number.\n",n);
}else if(n == 0){
	printf("Input is Equals or almost equals to Zero.\n",n);
}else{
	printf("%d is a Negative Number.\n",n);
}

*/

/* Program 7;


*/

	
return 0;
}