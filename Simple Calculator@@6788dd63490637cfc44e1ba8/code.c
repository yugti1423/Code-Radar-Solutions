#include <stdio.h>

void calc(){
    int a, b;
    char op;
    scanf("%d %d",&a, &b);
    scanf("%c",&op);
    if(op == +){
        printf("%d",a+b);
    }
    else if(op == -){
        printf("%d",a-b);
    }
    else if(op == *){
        printf("%d",a*b);
    }
    else if(op == /){
        printf("%d",a/b);
    }
    else{
        printf("Error");
    }
}
int main(){
    calc();
    return 0;
}