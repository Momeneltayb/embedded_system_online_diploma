
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;
	printf("enter the number :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);

	if ((x%2)==0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}
	return 0;
}
