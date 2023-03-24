#include<stdio.h>


int sort(int x[],int a)
{
	
	int temp;
	
	for(int j=0;j<a;j++)
	{
			
		for(int i=0;i<a;i++)
		{
			if(x[i]>x[i+1])
			{
				temp=x[i];
				x[i]=x[i+1];
				x[i+1]=temp;
			}
		}
	}
	
}

void printSortedData(int x[],int a)
{
	for (int i=0; i<a; i++)
	{
		printf("%d ",x[i]);
		
	}
}

int main()
{
	int a;
	printf("Enter the size of the array:");
	scanf("%d",&a);
	int x[a];
	
	
	printf("Enter the elements of the array:");
	for (int i=0; i<a; i++)
	{
		scanf("%d",&x[i]);
		
	}
	for (int i=0; i<a; i++)
	{
		printf("%d ",x[i]);
    }
	
	sort(x,a);
	
	printf("\nSorted data with elements on one side: ");
	
	printSortedData(x,a);
		
	return 0;
		
}
