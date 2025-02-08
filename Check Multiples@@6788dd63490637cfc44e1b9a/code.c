#include <stdio.h>

void multiple(){
    int num, div;
    scanf("%d %d", &num, &div);
    if(num % div == 0){
        printf("Yes");
    }else{
        printf("No");
    }
}
int main(){
    multiple();
    return 0;
}