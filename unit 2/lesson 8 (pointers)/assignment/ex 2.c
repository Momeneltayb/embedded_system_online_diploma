

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char alpha[27] ;
	char *M = alpha;

	for(int i = 0 ;i<26;i++)
	{
		*M = 'A' + i ;
		M ++ ;
	}
	M=alpha;

	for(int i = 0 ;i<26;i++)
		{
			printf("%c  ",alpha[i]);
		}


}
