// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

#include <stdio.h>

int main()
{
    int arr[100], n;
    int sum = 0, totalSum, missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    totalSum = n * (n + 1) / 2;

    missing = totalSum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
