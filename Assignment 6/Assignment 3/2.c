// Print table for the given munber

#include <stdio.h>
void table(int *num);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    table(&num);
}
void table(int *num)
{
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", (*num) * i);
    }
}