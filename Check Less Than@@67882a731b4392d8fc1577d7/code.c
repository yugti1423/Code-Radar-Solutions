#include <stdio.h>

void lesser(){
    int x,y;
    scanf("%d %d",&x, &y);
    if(x<y){
        printf("True");
    }    
    else{
        printf("False");
    }
}
int main() {
    lesser();
    return 0;
}