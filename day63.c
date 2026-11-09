// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>

int main()
{
    int arr[100], n, k, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Kth Smallest Element: %d\n", arr[k - 1]);

    return 0;
}

