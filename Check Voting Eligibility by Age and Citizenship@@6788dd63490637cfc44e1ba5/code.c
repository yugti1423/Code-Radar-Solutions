#include <stdio.h>

void vote(){
    int age, status;
    scanf("%d %d",&age, &status);
    if(age >= 18 && status == 1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}
int main(){
    vote();
    return 0;
}