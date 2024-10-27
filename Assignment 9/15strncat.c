#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";  // Ensure this array is large enough
    char str2[] = "World!";

    // Concatenate the first 3 characters of str2 to str1
    strncat(str1, str2, 3);

    // Print the result
    printf("Concatenated String: %s\n", str1);

    return 0;
}
