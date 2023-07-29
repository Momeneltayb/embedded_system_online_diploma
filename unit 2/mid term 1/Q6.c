#include <stdio.h>
#include <stdlib.h>

int uniq(int arr[],int size)
{
	int num = arr[0];
	for(int i = 1 ; i<size;i++)
	{
		num ^= arr[i];
	}
	return num;
}

int main()
{
	int size , result;
	int arr[] ={4,2,5,2,5,7,4} ;
	size = sizeof(arr)/sizeof(arr[0]);

	result = uniq(arr,size);
	printf("the unique number is : %d",result);
}
