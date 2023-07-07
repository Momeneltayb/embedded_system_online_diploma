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
	unsigned int i ;
	float sum ;
	printf("enter the number of data : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&i);

	float number [i] ;

	for(int j=1;j<=i;j++)
	{
		printf("enter the number %d ",j);
		fflush(stdout);fflush(stdin);
		scanf("%f",&number[j-1]);

		sum = number[j-1] + sum ;
	}

	printf("the sum is %f ",sum);







//	for (i=0;i<2;i++)
//			{
//				for (j=0;j<2;j++)
//				{
//				fflush(stdout);fflush(stdin);
//					sum [i][j]= m1[i][j] + m2[i][j];
//					printf(" the sum of the matrix  = %f \n",sum[i][j]);
//				}
//			}
}
