#include<stdio.h>

void not_equal(){
    int x,y;
    scanf("%d %d",&x, &y);
    if(x == y){
        printf("False")
    }
    else{
        printf("True");
    }
}
int main(){
    not_equal();
    return 0;
}