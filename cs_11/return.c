#include <stdio.h>
#include <stdlib.h>

int func(int* high, int* low, int* np, int nsize){
    int average = 0;
    *high = *np;
    *low = *np;
    for(int i = 0; i < nsize; i++){
        if(*np > *high) *high = *np;
        if(*np < *low) *low = *np;
        average += *np++;
    }
    return average/nsize;
}


int main(){
    int n[5] = {3,4,5,6,7};
    int ave,high,low;
    ave = func(&high, &low, n, 5);
    printf("ave = %d, high = %d , low = %d\n",ave,high,low);
    return 0;
}