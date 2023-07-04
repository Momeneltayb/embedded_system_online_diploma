
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x , y , sum ;
	printf("enter 2 integers :");
	fflush(stdout);fflush(stdin);
	scanf("%d \n %d",&x,&y);
	sum = x + y ;
	printf("sum : %d",sum);
}
