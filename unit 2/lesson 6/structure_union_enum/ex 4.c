#include <stdio.h>
#include <stdlib.h>
struct student {
	char mname [100];
	int mroll ;
	float mmark ;

};

int main(void) {
	struct student s[10];
	for(int i = 0 ;i<=2;i++)
	{
	s[i].mroll = i+1;
	printf("enter information of student \n");
	printf("enter the name ");
	fflush(stdout);fflush(stdin);
	scanf("%s",s[i].mname );

	printf("enter marks");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s[i].mmark);
	}
	for (int i = 0;i<=2;i++)
	{
	printf("displaying information  \n");
	printf("name :");
	puts(s[i].mname);
	printf("Roll : %d\n",s[i].mroll);
	printf("marks : %f\n",s[i].mmark);
	}
}
