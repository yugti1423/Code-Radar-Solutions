#include <stdio.h>

void scd(){
    int age;
    scanf("%d",&age);
    if(age >= 60){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
}
int main(){
    scd();
    return 0;
}