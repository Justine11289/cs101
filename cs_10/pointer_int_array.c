#include <stdio.h>
#include <stdlib.h>

int main(){
    int var[5]={1,10,100,1000,10000};
    int *ip = NULL;
    ip = var;
    printf("Value of *ip=%d\n",*ip);
    printf("Value of *ip=%d\n",*ip++);
    printf("Value of *ip=%d\n",++*ip);
    printf("Value of *ip=%d\n",++*ip++);
    printf("Value of *ip=%d\n",++*++ip);
    return 0;
}
/* *號後++:先輸出後++ *號前++:先++後輸出 */