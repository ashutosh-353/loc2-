#include <stdio.h>

void sum(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void main()
{
    int a, b, result;

    printf("Enter any two numbers:\n");
    scanf("%d %d", &a, &b);

    sum(&a, &b, &result);

    printf("Sum of these two numbers is %d", result);

}