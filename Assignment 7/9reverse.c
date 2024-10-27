//Reverse the given array.

#include<stdio.h>
void main()
{
    int r[5], rev[5], i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the values: ");
        scanf("%d",&r[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        rev[i]=r[4-i] ;
    }
    printf("Reversed array: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", rev[i]);
    }
    
    
}