#include <stdio.h>

void sq(){
    int a, b;
    scanf("%d %d",&a, &b);
    if((b*b)==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
int main(){
    sq();
    return 0;
}