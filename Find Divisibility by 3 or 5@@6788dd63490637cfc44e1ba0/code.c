#include <stdio.h>

void div(){
    int num;
    scanf("%d",&num);
    if(num % 3 == 0 && num % 5 == 0){
        printf("Divisible by Both");
    }
    else if(num % 3 == 0){
        printf("Divisible by 3");
    }
    else if(num % 5 == 0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
}
int main(){
    div();
    return 0;
}