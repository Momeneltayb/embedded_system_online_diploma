
#include <stdio.h>
#include <stdlib.h>

struct employee
{
	char name[50];
	int ID ;
};


int main(void) {
struct employee emp1 ={"femto",123}, emp2={"guts",321},emp3={"griffith",321};
struct employee	(*arr[]) = {&emp1,&emp2,&emp3};
struct employee (*(*p)[3])= &arr;

	printf("%d\n",(**(*p)).ID);
	printf("%s",(*(*p))->name);

}
