#include <stdio.h>

int main() {
    char string[100];
    int vowel = 0, consonant = 0, digit = 0, spaces = 0;

    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        char c = string[i];

        if (c == 'A'|| c == 'a'|| c == 'E'|| c == 'e'|| c == 'I'|| c == 'i' || c == 'O'|| c == 'o'|| c == 'U'|| c == 'u') {
            vowel++;
        }
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            consonant++;
        }
        else if (c >= '0' && c <= '9') {
            digit++;
        }
        else if (c == ' ') {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Digits: %d\n", digit);
    printf("Spaces: %d\n", spaces);

    return 0;
}
