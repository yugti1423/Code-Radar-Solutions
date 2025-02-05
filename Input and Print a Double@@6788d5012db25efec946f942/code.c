#include <stdio.h>

double welcome {
    double a;
    scanf("%f",&a);
    if (a==0){()
        return 0;
    }
    scanf("%lf",&a);
    return a;
}
int main() {
    printf("You entered: %.4f", welcome());
    printf("You entered: %.4lf", welcome());
    return 0;
}