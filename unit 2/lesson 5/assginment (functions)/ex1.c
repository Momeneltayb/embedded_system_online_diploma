/*
 ============================================================================
 Name        : lesson.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime (int x)
{
	int i , check=0 ;
	for(i=2;i<x/2;i++)
		if(x%i == 0)
		{

			check=1;
			break;
		}
	return check ;

}

int main(void) {

	int a , b ,check , i ;
	printf("hello enter two numbers  ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);

	for (i=a;i<b;i++)
	{
		check=prime(i);
		if(check==0)
			printf("%d is a prime number ",i);
	}
}
