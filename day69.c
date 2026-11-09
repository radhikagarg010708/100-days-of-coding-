// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main()
{
    int arr[100], freq[101] = {0};
    int n, repeated = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1)
        {
            repeated = arr[i];
            break;
        }

        freq[arr[i]]++;
    }

    printf("Repeated element is: %d\n", repeated);

    return 0;
}
