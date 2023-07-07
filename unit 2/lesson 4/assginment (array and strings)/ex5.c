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
	int n ;
	int search;
	int pos ;
	int count = 1;
	printf("enter the number of elements then its elements \n ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	int elements [n] ;

	for(int i=0;i<n;i++)
	{
		scanf("%d",&elements [i]);
	}

	printf("enter the element to be searched  \n ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&search);

	for(int i=0;i<n;++i)
	{
		if (elements[i]==search)
		{
			printf("the number were found at  : %d \n",count);
			break ;
		}
		count = 1 + count;
		if (count>=n)
		{
			printf("the number were not found");
			break;
		}
	}

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
