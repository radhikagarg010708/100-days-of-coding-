
#include <stdio.h>

int main()
{
    int n, x;
    int leftSum = 0, rightSum = 0;
    int pivot = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = (n * (n + 1) / 2) - ((x - 1) * x / 2);

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("Pivot Integer: %d\n", pivot);

    return 0;
}
