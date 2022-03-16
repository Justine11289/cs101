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

int main(){
    bits_t abyte;
    abyte.bit0 = 1, abyte.bit1 = 1, abyte.bit2 = 0;
    abyte.bit3 = 0, abyte.bit4 = 1, abyte.bit5 = 1;
    abyte.bit6 = 0, abyte.bit7 = 0;
    int b3 = 8;
    printf("bit0 = %d, bit1 = %d\n", abyte.bit0, abyte.bit1);
    printf("bit6 = %d, bit7 = %d\n", abyte.bit6, abyte.bit7);
    printf("b3 = %d\n", b3>>3&1); //0000 1000 move 3 => 0000 0001
    return 0;
}