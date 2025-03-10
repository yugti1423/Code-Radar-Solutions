#include<stdio.h>
int main(){
    int a, b;
    char opr;
    scanf("%d",&opr);
    scanf("%d %d",&a, &b);
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