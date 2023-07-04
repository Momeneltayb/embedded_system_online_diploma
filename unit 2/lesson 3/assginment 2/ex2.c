
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;
	printf("enter the alphabet :");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);

	if (x=='a')
	{
		printf("a is a vowl");
	}
	else if (x=='e')
	{
		printf("e is a vowl");
	}
	else if (x=='i')
		{
			printf("i is a vowl");
		}
	else if (x=='o')
		{
			printf("o is a vowl");
		}
	else if (x=='u')
		{
			printf("u is a vowl");
		}
	else
	{
		printf("%c is a consonant",x);
	}
	return 0;
}
