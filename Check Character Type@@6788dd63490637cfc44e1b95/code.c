#include <stdio.h>

void func(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'a','e','i','o','u','A','E','I','O','U'){
        printf("Vowels");
    }else{
        printf("Consonant");
    }

    if(ch==int(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}

int main(){
    func();
    return 0;
}