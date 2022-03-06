#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n = 5;
    srand((unsigned) time(NULL));
    for(int i = 0; i < n; i++){
        printf("%d\n",rand()%50);
    }
}