#include <stdio.h>

void func(){
    int x, y;
    scanf("%d %d",&x, &y);
    if(x > 0 && y < 0 || x == 0 && y == 0){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    func();
    return 0;
}