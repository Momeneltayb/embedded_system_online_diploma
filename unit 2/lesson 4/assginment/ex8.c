/*
 ============================================================================
 Name        : section.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

	char name [100];

	int i =0 ;
	int L=0;

	printf("please enter string : ");
	fflush(stdout);fflush(stdin);
	scanf("%s",name);             // name == &name[0]

	L= strlen(name);
	int j=L-1;
	char rename [j];
	for (i;i<L;i++)
	{
		rename[i]=name[j];
		j--;

	}
	printf("the reversed string is : %s  ",rename);








}
