//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    float a, b, temp;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);
    
    printf("Before swapping: a = %.2f, b = %.2f\n", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %.2f, b = %.2f\n", a, b);

    return 0;
}
