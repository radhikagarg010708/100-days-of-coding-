
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

    printf("Previous Greater Elements: ");

    for (int i = 0; i < n; i++)
    {
        int previous = -1;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }

        printf("%d ", previous);
    }

    return 0;
}
