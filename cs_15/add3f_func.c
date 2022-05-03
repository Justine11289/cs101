#include <stdio.h>
#include <stdlib.h>

float add3f_func(float a,float b,float c){
    return a+b+c;
}

int main(){
    float n = 10.89,m = 1.23,k = 3.14;
    float (*func_ptr)(float,float,float);
    func_ptr = add3f_func;
    printf("%f\n",func_ptr(n,m,k));
    return 0;
}