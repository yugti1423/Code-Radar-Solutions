#include <stdio.h>

void grt_equal(){
    int x, y;
    scanf("%d %d",&x, &y);
    if(x >= y){
        printf("True");
    }
    else{
        printf("False");
    }
}
int main() {
    grt_equal();
    return 0;
}