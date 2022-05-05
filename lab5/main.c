#include <stdio.h>
#include <stdlib.h>

typedef struct array_list_t{
    int variable;
    int* (*GET_INT_ARRAY)(int);
    void (*SET_VALUE)(int*,int);
    void (*PRINT_ARRAY)(int*,int);
}array_list_t;

int* get_int_array(int n){
    return (int*)calloc(n,sizeof(int));
}

void set_value(int* p,int v){
    *p = v;
}

void print_array(int* p,int n){
    printf("[");
    for(int i = 0; i < n; i++){
        (i!=n-1)?(printf("%d, ",*p+i)):(printf("%d]\n",*p+i));
    }
}

int main(){
    printf("No.1------------------\n");
    int n =10;
    int* ip = get_int_array(n);
    for(int i = 0; i < n; i++){
        set_value(ip+i,i+1);
    }
    print_array(ip,n);
    printf("No.2------------------\n");
    array_list_t x;
    x.variable = 20;
    x.GET_INT_ARRAY = get_int_array;
    x.SET_VALUE = set_value;
    x.PRINT_ARRAY = print_array;
    int* iptr = get_int_array(x.variable);
    for(int i = 0; i < x.variable; i++){
        set_value(iptr+i,i+1);
    }
    print_array(iptr,x.variable);
    printf("No.3------------------\n");
    return 0;
}