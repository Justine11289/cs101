#include <stdio.h>
#include <stdlib.h>

typedef struct array_list_t{
    int array_len;
    int* (*get_int_array_func)(int);
    void (*set_value_func)(int*,int);
    void (*print_array_func)(int*,int);
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
    array_list_t al;
    al.array_len = 20;
    al.get_int_array_func = get_int_array;
    al.set_value_func = set_value;
    al.print_array_func = print_array;
    int* ipt = al.get_int_array_func(al.array_len);
    for(int i = 0; i < al.array_len; i++){
        al.set_value_func(ipt+i,i+1);
    }
    al.print_array_func(ipt,al.array_len);
    return 0;
}