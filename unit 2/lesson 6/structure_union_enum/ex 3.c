#include <stdio.h>
#include <stdlib.h>
struct cmplx {
	float mreal;
	float mimg;

};

struct cmplx add (struct cmplx a,struct cmplx b)
{
	struct cmplx c ;
	c.mreal=a.mreal+b.mreal;
	c.mimg=a.mimg+b.mimg;
	return c;
}

int main(void) {
	struct cmplx a,b,c;
	printf("for the first number \n");
	printf("enter real and imaginary numbers  : ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&a.mreal,&a.mimg);

	printf("for the first number \n");
	printf("enter real and imaginary numbers  : ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&b.mreal,&b.mimg);

	c=add(a,b);
	printf("the sum is equal to %0.2f + %0.2fi",c.mreal,c.mimg);





}
