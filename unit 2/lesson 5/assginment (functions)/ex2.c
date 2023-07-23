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

int fac (int x)
{
	if (x!=1)
		return x * fac(x-1);
}

int main(void) {

	int x;
	printf("enter the number  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("the factorial of %d = %d",x,fac(x));

}
