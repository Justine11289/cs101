#include <stdio.h>
#include <stdlib.h>

int main(){
    char carray[12] = "CGU1234567";
    char *cp = carray;
    printf("print_array = ");
    for(int i = 0; i < 12 ; i++){
        printf("%c ",carray[i]);
    }
    printf("\nprint_parray = ");
    for(int i = 0; i < 12 ; i++){
        printf("%c ",*(cp++));
    }
    return 0;
} 