#include <stdio.h>
#include <stdlib.h>

void print_array(int** pp,int len){
    for(int i = 0; i < len; i++){
        printf("[%i]=%d\n",i,*((*pp)+i));
    }
}

int main(){
    int var[]={10,100,200,300,400};
    int* p = var;
    print_array(&p,5);
    return 0;
}