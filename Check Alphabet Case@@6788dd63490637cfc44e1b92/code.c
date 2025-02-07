#include <stdio.h>

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    } else {
        printf("Neither uppercase nor lowercase");
    }
    return 0;
}
