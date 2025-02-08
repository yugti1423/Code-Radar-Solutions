#include <stdio.h>

void prime(){
    int num;
    scanf("%d",&num);
    if((num > 1) && (num % 1 == 0) && (num % num == 0)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
int main(){
    prime();
    return 0;
}