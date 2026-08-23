//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    float a, b, sum, diff, product, quotient;

printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
   printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n",quotient);

    return 0;
}