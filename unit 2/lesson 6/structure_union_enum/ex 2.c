#include <stdio.h>
#include <stdlib.h>
struct distance {
	int feet;
	float inch;

}a,b,c;

int main(void) {
	/*printf("enter information of student \n");
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
	printf("marks : %f\n",s.mmark);*/
	printf("enter information of 1st distance \n");
	printf("enter feet : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a.feet  );
	printf("enter inch : ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a.inch );

	printf("enter information of 1st distance \n");
	printf("enter feet : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&b.feet );
	printf("enter inch : ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b.inch );

	c.feet=a.feet+b.feet;
	c.inch=a.inch+b.inch;

	if(c.inch>12)
	{
		c.inch=c.inch-12;
		c.feet++;
	}

	printf("the sum is equal to %d' %f''",c.feet,c.inch);
}
