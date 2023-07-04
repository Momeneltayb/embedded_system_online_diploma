
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,answer ;
	char x ;
	printf("enter the operator either +,-,*,/  :\n");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);

	printf("enter the two numbers :\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	scanf("%d",&b);


	switch (x)
	{
	case '+':
					answer= a+b;
	break;
	case '-':
					answer= a-b;
	break;
	case '*':
						answer= a*b;
	break;
	case '/':
						answer= a/b;
	break;

	}
	printf("the answer = %d \n",answer);
	return 0;
}
