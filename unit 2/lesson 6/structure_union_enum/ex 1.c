#include <stdio.h>
#include <stdlib.h>
struct student {
	char mname [100];
	int mroll ;
	float mmark ;

}s;

int main(void) {
	printf("enter information of student \n");
	printf("\nenter the name ");
	fflush(stdout);fflush(stdin);
	scanf("%s",s.mname );
	printf("enter roll number ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s.mroll );
	printf(" enter marks");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s.mmark );

	printf("displaying information  \n");
	printf("\n name :");
	puts(s.mname);
	printf("Roll : %d\n",s.mroll);
	printf("marks : %f\n",s.mmark);
}
