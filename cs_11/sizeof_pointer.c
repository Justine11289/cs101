#include <stdio.h>
#include <stdlib.h>

int main(){
    char* cp = NULL;
    char* cps = "UIIIIIIIIIIIIII";
    printf("sizeof(cp) = %i\n",sizeof(cp));
    printf("sizeof(*cp) = %i\n",sizeof(*cp));
    printf("sizeof(cps) = %i\n",sizeof(cps));
    printf("sizeof(*cps) = %i\n",sizeof(*cps));
    return 0;
}