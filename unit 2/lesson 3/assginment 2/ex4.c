
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a  ;
	printf("enter number  :\n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);

	if (a>0)
	{
		printf ("%f is postive",a);
	}
	else if(a==0)
	{
		printf ("you entered zero",a);
	}
	else
		{
			printf ("%f is negative",a);
		}
	return 0;
}
