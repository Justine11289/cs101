#include <stdio.h>
#include <stdlib.h>

int func(int a,int b){
    return a+b;
}

int add_func(int a,int b,int(*func_ptr)(int,int)){
    return func_ptr(a,b);
}

int main(){
    printf("add_func=%d\n", add_func(1,2,func));
    return 0;
}