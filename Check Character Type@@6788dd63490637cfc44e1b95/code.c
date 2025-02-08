#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (isalpha(ch)) {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
            printf("%cVowel", ch);
        } else {
            printf("%cConsonant", ch);
        }
    }
    else if (isdigit(ch)) {
        printf("%cDigit", ch);
    }
    else {
        printf("%cSpecial character", ch);
    }
    return 0;
}