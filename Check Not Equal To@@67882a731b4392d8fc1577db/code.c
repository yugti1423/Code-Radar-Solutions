#include<stdio.h>

void not_equal(){
    int x,y;
    scanf("%d %d",&x, &y);
    if(x != y){
        printf("True")
    }
    else{
        printf("False");
    }
}
int main(){
    not_equal();
    return 0;
}