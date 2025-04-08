#include <stdio.h>

int main() {
    int N, i, j;
    int spaces;
    int stars;

    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        spaces = N - i;
        stars = 2 * i - 1;

        for (j = 1; j <= spaces; j++) {
            printf("  ");
        }
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = N - 1; i >= 1; i--) {
        spaces = N - i;
        stars = 2 * i - 1;

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}