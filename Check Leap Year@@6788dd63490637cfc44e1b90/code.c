#include <stdio.h>

void leap_year(){
    int yr;
    scanf("%d",&yr);
    if(yr%4 && yr%400){
        printf("Lear Year");
    } else{
        printf("Not a Leap Year");
    }
}

int main(){
    leap_year();
    return 0;
}