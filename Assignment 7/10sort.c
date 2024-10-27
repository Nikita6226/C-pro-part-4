//Sort the array.

#include <stdio.h>
void main()
{
    int a[7];

    // Input values into the array
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &a[i]); // Corrected to a[i]
    }// for loop ends here

    // Sorting the array (Bubble sort or Selection sort)    
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++) 
        {
            if (a[i] > a[j]) // Compare a[i] with a[j]
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }// for loop ends here

    // Print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
}
