#include <stdio.h>

void eligibility(){
    int age;
    scanf("%d",&age);
    if(age >= 18){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
}
int main(){
    eligibility();
    return 0;
}