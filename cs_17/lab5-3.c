#include <stdio.h>
#include <stdlib.h>

char* get_str_array(int n){
    return (char*)calloc(n,sizeof(char));
}

int get_str_len(char* s){
    int len = 0;
    while(*s++){len++;}
    return len;
}

char* my_str_cpy(char* s,char* d){
    while(*d){*s++ = *d++;}
    *s = 0;
    return s;
}

typedef char* (*ADD_INT_Func)(char* ,char* );

char* func(char* a,char* b){
    int str_len = 0;
    str_len = get_str_len(a) + get_str_len(b);
    char* new_str = get_str_array(str_len+1);
    char* tp =new_str;
    tp = my_str_cpy(tp,a);
    tp = my_str_cpy(tp,b);
    return new_str;
}

char* add_str_func(char* a,char* b,ADD_INT_Func func_ptr){
    return func_ptr(a,b);
}

int main(){
    char a[]="IU!IU!";
    char b[]="CGU";
    char* sp = add_str_func(a,b,func);
    printf("add_str_func = %s\n",sp);
    free(sp);
    return 0;
}