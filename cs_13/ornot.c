#include <stdio.h>
#include <stdlib.h>

int main(){
    int var[] = {10,100,200,300,400};
    printf("var = %p\n", var);
    printf("&var = %p\n", &var);
    printf("var+1 = %p\n", var+1); 
    printf("&var+1 = %p\n", &var+1);
    return 0;
}