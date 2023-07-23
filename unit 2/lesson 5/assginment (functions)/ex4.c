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

int powerfun (int b , int p)
{
	if(p!=0)
	{
		return(b*powerfun(b,p-1));
	}
	else
		return 1;


}

int main(void) {

	int base , power ;
	printf("hello enter the base and power sequentially  \n ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&base,&power);
	printf("%d ^ %d = %d  ",base,power,powerfun(base,power));


}
