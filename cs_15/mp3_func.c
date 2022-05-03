#include <stdio.h>
#include <stdlib.h>

int mp3_func(int a,int b,int c){
    return a*b*c;
}

int main(){
    int n = 10,m = 1,k = 5;
    int (*func_ptr)(int,int,int);
    func_ptr = mp3_func;
    printf("%d\n",func_ptr(n,m,k));
    return 0;
}