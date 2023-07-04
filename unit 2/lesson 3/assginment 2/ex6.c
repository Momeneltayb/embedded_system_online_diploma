
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ,sum=0 ;
	printf("enter an integer  :\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);

	for (int j=0 ;j<=x ;j++)
	{
		sum = sum + j ;
	}
	printf("sum = %d ",sum);
	return 0;
}
