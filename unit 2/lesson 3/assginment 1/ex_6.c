
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a_old,b_old,a_new,b_new  ;
	printf("the value of a :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a_old);

	printf("the value of b :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b_old);

	a_new=b_old;
	b_new=a_old;

	printf("a= : %f\n",a_new);
	printf("b= : %f",b_new);
}
