#include <stdio.h>

void grades(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A'){
        printf("Excellent");
    }else if(ch=='B'){
        printf("Good");
    }else if(ch=='C'){
        printf("Average");
    }else if(ch=='D'){
        printf("Below Average");
    }else if(ch=='F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
}
int main(){
    grades();
    return 0;
}