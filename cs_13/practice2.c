#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr =(int*)calloc(10,sizeof(int));
    for(int i = 0; i < 10; ++i){
        ptr[i] = i;
    }
    for(int i = 0; i < 10; i++){
        printf("[%i] = %d\n",i, ptr[i]);
    }
    free(ptr);
    ptr = NULL;
    return 0;
}