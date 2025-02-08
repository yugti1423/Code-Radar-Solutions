#include <stdio.h>

void even_odd(){
    int num;
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
int main(){
    even_odd();
    return 0;
}