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

	while(name[i]!=0)
	{
		++L;
		++i;
	}
	printf("the length of the string is equal to = %d",L);
//	printf("\n the transmatrix\n");
//	for(int i=0;i<c;i++)
//			{
//				for(int j=0;j<r;j++)
//				{
//					printf("%d ",transmatrix[i][j]);
//					if (j==r-1)
//								{
//									printf("\n\n");
//								}
//				}
//			}








}
