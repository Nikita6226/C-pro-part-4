//Merge two arrays.

#include<stdio.h>
void main()
{
    int n1[5], n2[3];
    int merge[10], i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the values for n1: ");
        scanf("%d",&n1[i]);
    }

    for ( i = 0; i < 3; i++)
    {
        printf("Enter the values for n2: ");
        scanf("%d",&n2[i]);
    }

    int index=0;
    for ( i = 0; i < 5; i++)
    {
        merge[index++]= n1[i];
    }

    for ( i = 0; i < 3; i++)    //
    {
        merge[index++]= n2[i];
    }
    
    printf("Merge array: ");
    for ( i = 0; i < 8; i++)
    {
        printf("%d ",merge[i]);
    }
    
}