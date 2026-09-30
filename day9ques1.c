//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);

        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f", root1);
    }
    else
    {
        printf("The roots are complex and imaginary.");
    }

    return 0;
}