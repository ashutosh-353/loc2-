#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the size of the two arrays:");
	scanf("%d%d",&a,&b);
	c=a+b;
	int x[a];
	int y[b];
	int z[c];
	{
		printf("Enter the elements of first array:");
		for (int i=0; i<a ;i++)
		{
			scanf("%d",&x[i]);
			
		}
		
		printf("Enter the elements of second array:");
		for (int i=0; i<b ;i++)
		{
			scanf("%d",&y[i]);
			
		}
		
		for (int i=0; i<a ; i++)
		{
			z[i]=x[i];
			
		}
	
		for (int i=0; i<b ;i++)
		{
			z[a+i]=y[i];
			
		}
		for (int i=c-1; i>=0; i--)
		{
			printf("%d ",z[i]);
		}
		
	
	}
	return 0;
}