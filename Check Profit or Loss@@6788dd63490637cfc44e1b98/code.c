#include <stdio.h>

void pro_los(){
    int cp, sp;
    scanf("%d %d",&cp,&sp);
    if(cp < sp){
        printf("Profit");
    } else if(cp > sp){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
}
int main(){
    pro_los();
    return 0;
}