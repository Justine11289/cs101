typedef int(*ADD_INT_Func)(int,int);
int func(int a,int b){
    return a+b;
}

int add_func(int a,int b,ADD_INT_Func func_ptr){
    return func_ptr(a,b);
}

int main(){
    printf("add_func = %d\n",add_func(3,2,func));
    return 0;
}