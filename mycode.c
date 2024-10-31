#include <stdio.h>
#include <string.h>

// Vulnerable function that causes a buffer overflow
void vulnerable_function(char *input) {
    char buffer[10];
    strcpy(buffer, input);  // Potential buffer overflow if input > 10 chars
    printf("You entered: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        vulnerable_function(argv[1]);
    } else {
        printf("Please provide an input.\n");
    }
    return 0;
}
