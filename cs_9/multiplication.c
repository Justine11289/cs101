#include <stdio.h>
#include <stdlib.h>

int multiplication(int i, int j){
    if(i == 10){
        return 0;
    }
    else if(j == 9){
        printf("%d * %d = %2d\n", i, j, i*j);
        multiplication(i+1, 1);
        return 0;
    }
    else{
        printf("%d * %d = %2d ", i, j, i*j);
        multiplication(i, j+1);
    }
}

int main(){
    multiplication(1, 1);
    return 0;
}