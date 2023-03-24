#include<stdio.h>

int main()

{
	int a;
	printf("Enter the size of the array:");
	scanf("%d",&a);
	int arr1[a];
	int arr2[a];
	
	printf("Enter the elements of array:");
	for (int i=0; i<a; i++)
	{
		
		scanf("%d",&arr1[i]);
	}
	for (int i=0; i<a; i++)
	{
		arr2[i]=arr1[i];
		printf("%d ",arr2[i]);
	}
	return 0;
}