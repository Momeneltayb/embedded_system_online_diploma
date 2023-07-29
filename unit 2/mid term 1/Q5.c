#include <stdio.h>
#include <stdlib.h>

int countones(int x)
{
	int count = 0 ;
	int filler = 1 ;
	int  m =x ;
	while (filler != 0)
	{
		m = x & filler ;
		if(m!=0)
			count++ ;
		filler = filler << 1 ;
	}
	return count;
}

int main()
{
	int num ;
	printf("enter the  number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("the  number of ones = ");
	printf(" %d",countones(num));

}
