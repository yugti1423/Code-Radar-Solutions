#include <stdio.h>

void leap_year(){
    int year;
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("Lear Year");
    } else{
        printf("Not a Leap Year");
    }
}

int main(){
    leap_year();
    return 0;
}