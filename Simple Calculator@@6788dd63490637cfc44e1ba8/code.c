#include<stdio.h>
int main(){
    float a, b;
    char opr;
    scanf("%f %f %c",&a, &b,&opr);
    switch(opr){
        case '+':
        printf("%d", (a + b));
        break;
        
        case '-':
        printf("%d", (a - b));
        break;

        case '*':
        printf("%d", (a * b));
        break;

        case '/':
        printf("%d", (a / b));
        break;

        default:
        printf("error");
    }
    return 0;
}