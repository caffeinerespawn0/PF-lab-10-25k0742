#include <stdio.h>

int main() {
    char gmail[100];
    int n = 0, point = 0, found = 0;

    printf("enter email address:");
    scanf("%s", gmail);

    for (int i = 0; gmail[i] != '\0'; i++) {
        n++;
    }

    for (int i = 0; i < n; i++) {
        if (gmail[i] == '@') {
            point = i;
            found = 1;
        }
    }

    if (found == 0) {
        printf("Invalid email");
    }
    else {
        for (int i = point + 1; i < n; i++) {
            printf("%c", gmail[i]);
        }
    }

    return 0;
}
