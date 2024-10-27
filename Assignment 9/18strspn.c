#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde12345";
    char str2[] = "abcde";

    size_t length = strspn(str1, str2);

    printf("The length of the initial segment is: %zu\n", length);

    return 0;
}
