#include <stdio.h>

void same_sign(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    if(num1 > 0 && num2 > 0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
}