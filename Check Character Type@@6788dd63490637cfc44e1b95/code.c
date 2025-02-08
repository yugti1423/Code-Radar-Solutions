#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (isalpha(ch)) {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
            printf("Vowel", ch);
        } else {
            printf("Consonant", ch);
        }
    }
    else if (isdigit(ch)) {
        printf("Digit", ch);
    }
    else {
        printf("Special Character", ch);
    }
    return 0;
}