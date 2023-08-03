#include <stdio.h>
#include <stdlib.h>

#define pi 3.1415

#define area(r) (r*r*pi)

int main(void) {
	int r;float ar;
	printf("Enter the radius :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&r);

	ar = area(r);
	printf("Area = %0.1f",ar);
}
