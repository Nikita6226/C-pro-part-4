//Take two array and add sum in third array.
/*eg.
arr[5]= { 1, 2, 3, 4, 5}
brr[5]= { 10, 20, 30, 40, 50}
crr[5]= { 11, 22, 33, 44, 55}*/

#include<stdio.h>
void main()
{
    int sum[5];
    int n1[5];
    int n2[5];

    for (int j = 0; j < 5; j++)
    {
        printf("Enter the value: ");
        scanf("%d%d", &n1[j], &n2[j]);  //no mam nhi hua
    }
    

    for (int i = 0; i < 5; i++)
    {
        sum[i]= n1[i]+ n2[i];
    }

    printf("Sum array: ");
   for (int i = 0; i < 5; i++)
   {
     printf("%d ",sum[i]);
   }
   
}