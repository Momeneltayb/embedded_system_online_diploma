/*
 ============================================================================
 Name        : pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 29 ;
	int *ab = &m;

	printf("addres of m = %x\n",&m);
	printf("value of m = %d\n",m);

	printf("addres of ab = %x\n",ab);
	printf("value of ab = %d\n",*ab);

	m = 34;
	printf("addres of ab = %x\n",ab);
	printf("value of ab = %d\n",*ab);
	*ab = 7;
	printf("addres of m = %x\n",&m);
	printf("value of m = %d\n",m);


}
