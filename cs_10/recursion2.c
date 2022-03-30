#include <stdio.h>
#include <stdlib.h>

int recursion(int n){
    if(n == 0) return 0;
    recursion(n-1);
    printf("%d\n",n);
}

int main(){
    recursion(10);
    return 0;
}