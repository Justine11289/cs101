#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5]={0,2,4,6,8};
    int b[5]={1,3,5,7,9};
    int* c[10];
    for(int i = 0, j = 0, k = 0; i < 10; i++){
        (i%2 == 0)? (c[i] = &a[j++]):(c[i] = &b[k++]);
    }
    for(int i = 0; i < 10; i++){
        printf("%d ",*c[i]);
    }
    return 0;
}