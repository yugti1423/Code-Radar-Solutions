#include <stdio.h>

void left(){
    int n1, n2;
    scanf("%d %d",&n1, &n2);
    return n1 << n2;
}

int main(){
    left();
    return 0;
}