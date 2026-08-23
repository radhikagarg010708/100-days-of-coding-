//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 22/7 * radius * radius;
    circumference = 2 * 22/7 * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}