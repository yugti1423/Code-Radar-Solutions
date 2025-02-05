#include<stdio.h>

void less_equal(){
    int a,b;
    scanf("%d %d",&a, &b);
    if(a <= b){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    less_equal();
    return 0;
}