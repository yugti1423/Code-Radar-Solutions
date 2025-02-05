#include <stdio.h>

void grt_equal(){
    int n1, n2;
    scanf("%d %d",&n1, n2);
    if(n1 >= n2){
        printf("True");
    }
    else{
        printf("False");
    }
}
int main() {
    grt_equal();
    return 0;
}