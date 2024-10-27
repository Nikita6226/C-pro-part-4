//mystrcpy()  = copies a string from source to desination.

#include<stdio.h>
#include<string.h>
void main()
{
    char arr[5]= "abc";
    char brr[5];

    strcpy(brr, arr);

    printf("%s",arr);
    printf("%s",brr);
}