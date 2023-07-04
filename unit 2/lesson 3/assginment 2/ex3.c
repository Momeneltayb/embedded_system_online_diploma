
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b , c ;
	printf("enter number 1 :\n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf(" enter number 2 :\n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);
	printf(" enter number 3 :\n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&c);

	if (a>b && a>c)
	{
		printf ("%f is the biggest number",a);
	}
	else if (b>a && b>c)
		{
			printf ("%f is the biggest number",b);
		}
	else
	{
		printf ("%f is the biggest number",c);
	}
	return 0;
}
