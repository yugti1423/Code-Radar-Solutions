#include<stdio.h>
int main(){
    int a, b, char opr;
    scanf("%d %d %c",&a, &b, &opr);
    switch(opr){
        case '+':
        printf("%d",a+b);
        break;
        
        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        printf("%d",a/b);
        break;

        default:
        break;
    }
}