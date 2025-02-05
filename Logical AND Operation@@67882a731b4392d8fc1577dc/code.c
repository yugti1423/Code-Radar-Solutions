#include<stdio.h>

void grtr(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > 0 && b > 0){
        printf("True");
    } else{
        printf("False");
    }
}
int main(){
    grtr();
    return 0;
}