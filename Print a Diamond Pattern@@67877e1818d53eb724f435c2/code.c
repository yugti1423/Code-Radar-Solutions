#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}