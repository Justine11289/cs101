#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    srand(n);
    for(int i = 0; i < n; i++){
        printf("%d\n",rand()%50);
    }
}