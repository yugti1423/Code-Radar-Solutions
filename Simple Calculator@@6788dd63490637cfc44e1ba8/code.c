#include <stdio.h>

void calc(){
    int a,b,char op;
    scanf("%d %d %c",&a,&b,&op);
    if(op == '+'){
        printf("%d",(a+b));
    }
    else if(op == '-'){
        printf("%d",(a-b));
    }
    else if(op == '*'){
        printf("%d",(a*b));
    }
    else if(op == '/'){
        printf("%d",(a/b));
    }
    else{
        printf("Error");
    }
}
int main(){
    calc();
    return 0;
}