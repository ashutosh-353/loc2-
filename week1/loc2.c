#include<stdio.h>
int main()
{
    int n;
    printf("Enter any natural number:");
    scanf("%d", &n);
    if(n>0)
    {
        printf("Entered number is positive");
    }
    else if(n<0)
    {
        printf("Entered number is negetive");
    }
    else if(n==0)
    {
        printf("Entered number is zero");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}