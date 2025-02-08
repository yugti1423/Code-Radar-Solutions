#include <stdio.h>

void p_n_0(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Positive");
    }else if(n<0){
        printf("Negative");
    }else{
        printf("Zero");
    }
}
int main(){
    p_n_0();
    return 0;
}