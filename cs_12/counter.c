#include <stdio.h>
#include <stdlib.h>

int rec_counter(int n){
    if(!n) return 0;
    return 1 + rec_counter(n-1);
}

int main(){
    int n = 5;
    printf("len = %d\n",rec_counter(n));
    return 0;
}