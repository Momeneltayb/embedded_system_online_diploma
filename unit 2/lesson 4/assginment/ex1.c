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

	float m1 [2][2] ;
	float m2 [2][2] ;
	float sum [2][2];

	int i;
	int j;

	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("enter a %d %d : ",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%f",&m1[i][j]);
		}
	}
	for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				printf("enter b%d%d : ",i,j);
				fflush(stdout);fflush(stdin);
				scanf("%f",&m2[i][j]);
			}
		}
	for (i=0;i<2;i++)
			{
				for (j=0;j<2;j++)
				{
					sum [i][j]= m1[i][j] + m2[i][j];
					printf("%f \n",sum[i][j]);
				}
			}
}
