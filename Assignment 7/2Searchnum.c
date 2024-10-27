// 2. Search the given number in array.

#include <stdio.h>
void main()
{
    int a[5];
    int i, element;
    int found = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the numbers: ");
        scanf("%d", &a[i]);
    }

    printf("Enetr the element for search: ");
    scanf("%d", &element);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == element)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number found at position: %d", i + 1);
    else
        printf("Not found!!");
}