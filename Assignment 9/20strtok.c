#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! This is C programming.";
    char delimiters[] = " ,!."; // Delimiters are space, comma, exclamation mark, and period
    
    // First call to strtok
    char *token = strtok(str, delimiters);

    // Continue extracting tokens until strtok returns NULL
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters); // Next call with NULL to continue tokenizing
    }

    return 0;
}
