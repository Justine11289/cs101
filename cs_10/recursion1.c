#include <stdio.h>
#include <stdlib.h>

int recursion(int n){
    if(n == 0) return 0;
    printf("%d\n",n);
    recursion(n-1);
}

int main(){
    recursion(10);
    return 0;
}