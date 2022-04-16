#include <stdio.h>
#include <stdlib.h>

int main(){
    int var[]={10,100,200,300,400};
    int (*a_p)[5] = &var;
    for(int i = 0; i < 5; i++){
        printf("value of a_p+%d (%p) = %d\n", i, &a_p[i], (*a_p)[i]);
    }
    return 0;
}