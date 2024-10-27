//Print alternate elements in array.

#include<stdio.h>
void main()
{
    int nrr[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Enter the values: ");
        scanf("%d",&nrr[i]);
    }

    for (int j = 0; j < 7; j+=2)    //j+=2 is req to update value of j.
    {
        printf("%d ",nrr[j]);
    }
    
    
}