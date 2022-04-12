#include <stdio.h>
#include <stdlib.h>

void print_str(char** pps,int n){
    for(int i = 0; i < n; i++){
        printf("[%i]=%s\n",i,pps[i]);
    }
}

int main(){
    char* pps[4]={"Hello IU","Hello IUU","Hello IUUU"};
    print_str(pps,3);
    return 0;
}