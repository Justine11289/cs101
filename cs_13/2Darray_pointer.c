#include <stdio.h>
#include <stdlib.h>

void print_array(int** pp,int n,int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("[%d,%d]=%d\n",i,j,*((*pp+(i*m))+j));
        }
    }
}

int main(){
    int var[][3]={{10,100,1000},{200,300,400}};
    int* p = *var;
    print_array(&p,2,3);
    return 0;
}