#include <stdio.h>

void freeeze(){
    int temp;
    scanf("%d",&temp);
    if(temp > 0){
        printf("Above Freezing");
    }
    else{
        printf("Freezing");
    }
}
int main(){
    freeeze();
    return 0;
}