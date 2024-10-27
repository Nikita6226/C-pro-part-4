#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'W';

    // Find the first occurrence of 'W' in the string
    char *result = strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
