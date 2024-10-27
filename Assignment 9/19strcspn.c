#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde12345";
    char str2[] = "123";

    size_t length = strcspn(str1, str2);

    printf("The length of the initial segment without any '123' is: %zu\n", length);

    return 0;
}
