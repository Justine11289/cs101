#include <stdio.h>
#include <stdlib.h>

int* get_int_array(int n){
    return (int*)calloc(n,sizeof(int));
}

void set_value(int* p,int v){
    *p = v;
}

void print_array(int* p,int n){
    printf("[");
    for(int i = 0; i < n; i++){
        (i!=n-1)?(printf("%d, ",*p + i)):(printf("%d]\n",*p + i));
    }
}

int main(){
    int n =10;
    int* ip = get_int_array(n);
    for(int i = 0; i < n; i++){
        set_value(ip+i,i+1);
    }
    print_array(ip,n);
    return 0;
}