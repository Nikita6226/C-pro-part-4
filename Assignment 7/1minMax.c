// Array
// 1. Print minimun and maximun number in array.

#include <stdio.h>
void main()
{
    int a[4];
    int i, min, max;
    for (i = 0; i < 4; i++)
    {
        printf("Enter the values: ");
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (i = 0; i < 4; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("Min: %d", min);
    printf("\nMax: %d", max);
}