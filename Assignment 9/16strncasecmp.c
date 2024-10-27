#include <stdio.h>
#include <strings.h>  // For strncasecmp

int main() {
    const char *s1 = "Hello, World!";
    const char *s2 = "hello, world!";
    size_t n = 5;

    // Compare the first 5 characters of s1 and s2, ignoring case
    int result = strncasecmp(s1, s2, n);

    if (result == 0) {
        printf("The first %zu characters of both strings are equal (case-insensitive).\n", n);
    } else if (result < 0) {
        printf("The first %zu characters of s1 are less than those of s2 (case-insensitive).\n", n);
    } else {
        printf("The first %zu characters of s1 are greater than those of s2 (case-insensitive).\n", n);
    }

    return 0;
}
