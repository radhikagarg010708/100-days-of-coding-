// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int sum = 0, maxSum;

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

    
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum Subarray Sum: %d\n", maxSum);

    return 0;
}

