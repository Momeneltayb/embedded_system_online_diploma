
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ,factorial=1 ;
	printf("enter an integer  :\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);

	if (x>0)
	{
		for (int j=1 ;j<=x;j++)
		{
			factorial *= j ;
		}
		printf("factorial = %d ",factorial);
	}
	else
	{
		printf("error there is no factorial fo negative number ");
	}
	return 0;
}
