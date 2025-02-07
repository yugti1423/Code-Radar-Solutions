#include <stdio.h>

void opp_sign(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>0 && b<0){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    opp_sign();
    return 0;
}