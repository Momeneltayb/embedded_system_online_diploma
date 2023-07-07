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
	int r ;
	int c ;
	printf("enter the rows and columns  of the matrix : \n ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&r,&c);


	int matrix [10][10];
	int transmatrix [10][10];

	for(int i=0;i<r;++i)
	{
		for(int j=0;j<c;++j)
		{
			printf("enter the element %d%d :",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(int i=0;i<c;i++)//3
		{
			for(int j=0;j<r;j++)//2
			{
				transmatrix [i][j] = matrix [j][i] ; //00 - 00 -- 01 - 10
			}
		}
	printf("the matrix\n");

	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",matrix[i][j]);
			if (j==c-1)
			{
				printf("\n\n");
			}

		}
	}
	printf("\n the transmatrix\n");
	for(int i=0;i<c;i++)
			{
				for(int j=0;j<r;j++)
				{
					printf("%d ",transmatrix[i][j]);
					if (j==r-1)
								{
									printf("\n\n");
								}
				}
			}








}
