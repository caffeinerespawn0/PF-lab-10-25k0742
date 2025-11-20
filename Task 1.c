#include <stdio.h>

int main() {
    char password[100];
    int i, length = 0;
    int Upper = 0, Digit = 0, Special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    for (i = 0; password[i] != '\0'; i++) {
        length++;
    }

    if (length < 8) {
        printf("Password too short! Must be at least 8 characters.\n");
        return 0;
    }

    for (i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            Upper = 1;
        } else if (password[i] >= '0' && password[i] <= '9') {
            Digit = 1;
        } else if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%') {
            Special = 1;
        }
    }

    if (Upper && Digit && Special) {
        printf("Password is strong!\n");
    }
    else{
        printf("Password is weak! It must contain:\n");
        if (!Upper){
            printf("- At least one uppercase letter\n");
        }    
        if (!Digit){ 
            printf("- At least one digit\n");
        }    
        if (!Special){
            printf("- At least one special character (!,@,#,$,%%)\n");
        }    
    }

    return 0;
}
