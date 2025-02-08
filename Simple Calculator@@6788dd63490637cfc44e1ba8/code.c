#include <stdio.h>

void calc(){
    int a, b;
    char op;
    scanf("%d %d",&a, &b);
    scanf("%c",&op);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    if(op == '+'){
        printf("%d",c);
    }
    else if(op == '-'){
        printf("%d",d);
    }
    else if(op == '*'){
        printf("%d",e);
    }
    else if(op == '/'){
        printf("%d",f);
    }
    else{
        printf("Error");
    }
}
int main(){
    calc();
    return 0;
}