// Do all ques of assignment 7 using function.

#include <stdio.h>

void findMin(int[], int);
void findMax(int[], int);
void searchNumber(int[], int, int);
void sumOfAllNum(int[], int);
void oddEven(int[], int);
void alternate(int[], int);
void prime(int[], int);
void sumInDiffArray(int[], int[], int);
void mergeArray(int[], int[], int[], int);
void reverseArray(int[], int);
void sortArray(int[], int);

// 01. Find min max
void findMin(int arr[], int size)
{
    int min;
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Min: %d\n", min);
}
// 01. find max
void findMax(int arr[], int size)
{
    int max;
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf(" Max: %d\n", max);
}

// 02. Search number
void searchNumber(int arr[], int size, int num)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("Number %d found at %d position\n", num, i + 1);
            found = 1;
            break;
        }
    }
}

// 03. Sum of all numbers.
void sumOfAllNum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
}

// 04. Odd even
void oddEven(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            printf("Even num: %d\n", arr[i]);
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] % 2 != 0)
            printf("Odd num: %d\n", arr[j]);
    }
}

// 05. Print Alternate numbers.
void alternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        printf("\t%d\n", arr[i]);
    }
}

// 06. Prime number print
void prime(int arr[], int size)
{
    int isPrime = 1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= 1)
        {
            continue; // no. <=1 not prime
        }
        isPrime = 1;
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
            printf("\t%d", arr[i]);
    }
}

// 07.Sum of two array in 3rd array.
void sumInDiffArray(int arr1[], int arr2[], int size)
{
    int sum[5], i;
    for (int i = 0; i < size; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", sum[i]);
    }
}

// 08. Merge array
void mergeArray(int arr1[], int arr2[], int result[], int size) 
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        result[index++] = arr1[i];
    }

    for (int i = 0; i < size; i++)
    {
        result[index++] = arr2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", result[i]);
    }
}

// 09. Reverse the array.
void reverseArray(int arr[], int size)
{
    int rev[5];
    for (int i = 0; i < size; i++)
    {
        rev[i] = arr[4 - i];
    }
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d", rev[i]);
    }
}

// 10. Sort the array
void sortArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Print sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
}

// main starts here...
void main()
{
    int choice, i, num;

    // input
    int arr1[5], arr2[5], result[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the values for array1: ");
        scanf("%d", &arr1[i]);
    }

    do
    {
        printf("\n 1. Min \n 2.Max \n 3.Search number \n 4.Sum of all num \n 5.Odd even \n 6.Alternate \n 7.Prime \n 8.Sum in 3rd array \n 9.Merge \n 10.Reverse \n 11.Sort \n0. Exit\n");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        if (choice == 8 || choice == 9)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Enter the values for array2: ");
                scanf("%d", &arr2[i]);
            }
        }

        switch (choice)
        {
        case 1:
            findMin(arr1, 5);
            break;

        case 2:
            findMax(arr1, 5);
            break;

        case 3:
            printf("Enter the number to search: ");
            scanf("%d", &num);
            searchNumber(arr1, 5, num);
            break;

        case 4:
            sumOfAllNum(arr1, 5);
            break;

        case 5:
            oddEven(arr1, 5);
            break;

        case 6:
            alternate(arr1, 5);
            break;

        case 7:
            prime(arr1, 5);
            break;

        case 8:
            sumInDiffArray(arr1, arr2, 5);
            break;

        case 9:
            mergeArray(arr1, arr2, result, 5); 
            break;

        case 10:
            reverseArray(arr1, 5);
            break;

        case 11:
            sortArray(arr1, 5);
            break;

        default:
            break;
        }

    } while (choice != 0);
}