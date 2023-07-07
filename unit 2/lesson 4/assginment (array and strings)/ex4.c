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
	int newe;

	int pos ;

	// sorting the matrix
	printf("enter the number of elements then its elements \n ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	int elements [n] ;

	for(int i=0;i<n;i++)
					{
						scanf("%d",&elements [i]);
					}

	printf("enter the element to be inserted  \n ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&newe);

	printf("enter the location of inserted element   \n ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&pos);

	for(int i=0;i<n;++i)
						{
							if (i==pos-1)
							{
								printf(" %d  ",newe);
							}
							printf(" %d ",elements[i]);
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
