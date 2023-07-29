
#include <stdio.h>
#include <stdlib.h>

int sumdig(int a)
{
	int sum = 0 ;
	int remain ;
	while(a!=0)
	{
	remain= a%10;
	sum = sum + remain ;
	a= a/10;
	}
	return sum ;
}

int main(void) {
	int out;
	printf("hello enter the num : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&out);
	printf("the sum = %d",sumdig(out));
}
