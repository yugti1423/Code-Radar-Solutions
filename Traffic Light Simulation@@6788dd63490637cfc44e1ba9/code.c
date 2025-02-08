#include <stdio.h>

void traffic_light(){
    char color;
    scanf("%c",&color);
    if(color == 'R'){
        printf("Stop");
    }else if(color == 'G'){
        printf("Go");
    }else if(color == 'Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
}
int main(){
    traffic_light();
    return 0;
}