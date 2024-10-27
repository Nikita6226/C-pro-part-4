#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "aeiou";

    char *result = strpbrk(str1, str2);

    if (result != NULL) {
        printf("First vowel in '%s' is '%c'\n", str1, *result);
    } else {
        printf("No vowels found in '%s'\n", str1);
    }

    return 0;
}
