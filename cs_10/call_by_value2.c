#include <stdio.h>
#include <stdlib.h>

int func(int* i,int* j){
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
    printf("in main, i=%d, j=%d\n", i, j);
    printf("in main, i=%d, j=%d\n", *i, *j);
}

int main(){
    int n=1,m=2;
    func(&n,&m);
    printf("in main, n=%d, m=%d\n", n, m);
    return 0;
}