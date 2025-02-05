#include<stdio.h>

void equality(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    if(num1 == num2){
        printf("True");
    }
    else{
        printf("False");
    }
}

int main(){
    equality();
    return 0;
}