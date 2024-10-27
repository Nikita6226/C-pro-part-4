// Find odd and even among the numbers.

#include <stdio.h>
void main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enetr the values: ");
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}