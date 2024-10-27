// Find sum of all numbers.

#include <stdio.h>
void main()
{
    int arr[5], sum=0,i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the values: ");
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        sum+=arr[j];    //add each element of array to sum.
    }
    printf("Sum: %d",sum);
}