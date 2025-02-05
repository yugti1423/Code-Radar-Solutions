#include <stdio.h>

void greater(){
    int a, b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("True");
    }
    else{
        printf("False");
    }
}
int main() {
    greater();
    return 0;
}