#include<stdio.h>
#include<math.h>
void main()
{
    float R;
    printf("Enter the radius of the circle:");
    scanf("%f", &R);
    printf("Diameter of the circle is:%f\n", 2*R);
    printf("Circumference of the circle is:%f\n", 2*3.14*R);
    printf("Area of the circle is:%f", 3.14*pow(R,2));
}