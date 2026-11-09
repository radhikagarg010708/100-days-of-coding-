
#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");

    for (int i = 0; i < n; i++)
    {
        int next = -1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d ", next);
    }

    return 0;
}
