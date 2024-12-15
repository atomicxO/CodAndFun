#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Driver code */
int main(void)
{
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

	return 0;
}