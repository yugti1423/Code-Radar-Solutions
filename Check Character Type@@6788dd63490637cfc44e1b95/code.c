#include <stdio.h>

void func(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'a','e','i','o','u','A','E','I','O','U'){
        printf("Vowels");
    }else if(ch=='b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'){
        printf("Consonant");
    } else if(ch=='?','&','*',':'){
        printf("Special Charaacters");
    }else{
        printf("Digit");
    }
}

int main(){
    func();
    return 0;
}