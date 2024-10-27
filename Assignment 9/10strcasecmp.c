#include <stdio.h>
#include <strings.h>  // For strcasecmp function

int main() {
    char *str1 = "Hello, World!";
    char *str2 = "hello, world!";

    // Case-insensitive comparison
    int result = strcasecmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal (case-insensitive).\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2 (case-insensitive).\n");
    } else {
        printf("String 1 is greater than String 2 (case-insensitive).\n");
    }

    return 0;
}
