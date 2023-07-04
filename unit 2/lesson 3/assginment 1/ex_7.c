
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b  ;
	printf("the value of a :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);

	printf("the value of b :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("a= : %f\n",a);
	printf("b= : %f",b);

}
