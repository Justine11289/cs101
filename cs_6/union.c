#include <stdio.h>
#include <stdlib.h>

typedef struct bits{
    unsigned bit0:1;
    unsigned bit1:1;
    unsigned bit2:1;
    unsigned bit3:1;
    unsigned bit4:1;
    unsigned bit5:1;
    unsigned bit6:1;
    unsigned bit7:1;
}bits_t;

typedef union{
    bits_t mybits;
    int myint;
}mybyte_u;

int main(){
    mybyte_u b;
    b.myint = 8;
    printf("myint = %d\n", b.myint);
    printf("mybits = %d %d %d %d\n", b.mybits.bit3, b.mybits.bit2, b.mybits.bit1, b.mybits.bit0);
    return 0;
}