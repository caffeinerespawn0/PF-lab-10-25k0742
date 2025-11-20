#include <stdio.h>

int main() {
    char message[100];
    
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];
        if (c >= 'A' && c <= 'Z') {
            message[i] = ((c - 'A' + 3) % 26) + 'A';
        } else if (c >= 'a' && c <= 'z') {
            message[i] = ((c - 'a' + 3) % 26) + 'a';
        }
    }

    printf("Encrypted message: %s", message);

    return 0;
}
