#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello, World!";
    
    // Duplicate the string
    char *duplicate = strdup(str);
    
    if (duplicate != NULL) {
        printf("Original: %s\n", str);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);  // Free the dynamically allocated memory
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
