#include <stdio.h>

void func(){
    int a, b;
    scanf("%d %d",&a, &b);
    if(a <= 0 && b <= 0 ){
        printf("True");
    } else{
        printf("False");
    }
}


int main() {
    func();
    return 0;
}