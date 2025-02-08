#include <stdio.h>

void cel(){
    int a, b;
    scanf("%d %d",&a, &b);
    if(a == b){
        printf("Equal");
    }
    else if(a > b){
        printf("First");
    }
    else{
        printf("Second");
    }
}
int main(){
    cel();
    return 0;
}