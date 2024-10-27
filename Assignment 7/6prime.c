// Accept the array and print only prime numbers of array.

#include <stdio.h>
void main()
{
    int prr[5];
    int i, j, isPrime = 1;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the values: ");
        scanf("%d", &prr[i]);
    }

    printf("Prime numbers: ");
    for (int i = 0; i < 5; i++)
    {
        if (prr[i] <= 1)
        {
            continue;   //no. <=1 not prime
        }
        isPrime = 1;    //number is prime

        for (j = 2; j <= prr[i]/2; j++)
        {
            if (prr[i] % j == 0)
            {
                isPrime = 0; // not prime
                break;
            }
        }
        if (isPrime == 1)
            printf("%d ", prr[i]);
    }
}