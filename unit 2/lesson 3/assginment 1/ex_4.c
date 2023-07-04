
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y , product ;
	printf("enter two numbers");
	fflush(stdout);fflush(stdin);
	scanf("%f \n %f",&x,&y);
	product = x*y;
	printf("product : %f",product);
}
