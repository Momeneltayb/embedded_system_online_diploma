
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char num[15] = {2,3,4,5,6} ;
	char *M = num;

	int i;
	for(i=0; i <= (sizeof(num)/sizeof(char))-2;i++)
		{
			if(*(M+i) != 0)
			{
				printf("element - %d = %d \n",i+1,*(M+i));
			}
		}
	printf("\n\n");
	for(int i = (sizeof(num)/sizeof(char))-2;i>=0;i--)
	{
		if(*(M+i) != 0)
		{
			printf("element - %d = %d \n",i+1,*(M+i));
		}
	}

}
