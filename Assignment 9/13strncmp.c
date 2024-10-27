#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Everyone!";

    // Compare the first 5 characters of str1 and str2
    int result = strncmp(str1, str2, 5);

    if (result == 0) {
        printf("The first 5 characters of both strings are equal.\n");
    } else if (result < 0) {
        printf("The first 5 characters of str1 are less than str2.\n");
    } else {
        printf("The first 5 characters of str1 are greater than str2.\n");
    }

    return 0;
}
