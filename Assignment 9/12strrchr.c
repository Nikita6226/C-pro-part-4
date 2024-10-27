#include <stdio.h>
#include <string.h>  // For strrchr function

int main() {
    char str[] = "Hello, World!";

    // Find the last occurrence of 'o'
    char *result = strrchr(str, 'o');

    if (result) {
        printf("Last occurrence of 'o': %s\n", result);
    } else {
        printf("'o' not found in the string.\n");
    }

    return 0;
}
