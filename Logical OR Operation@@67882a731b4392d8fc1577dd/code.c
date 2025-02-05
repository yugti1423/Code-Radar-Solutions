#include <stdio.h>

void one_is_grtr(){
    int x, y;
    scanf("%d %d",&x, &y);
    if(x > 0 || y > 0){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    one_is_grtr();
    return 0;
}