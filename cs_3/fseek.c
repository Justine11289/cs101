#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE* fp;
    char thechar;
    fp = fopen("cj.txt","rw+");
    fprintf(fp,"1234567890ABCDEFGH");
    fseek(fp,5,SEEK_SET);
    thechar = fgetc(fp);
    printf("seek to 5 read %c\n",thechar);
    fseek(fp,10,SEEK_SET);
    thechar = fgetc(fp);
    printf("seek to 10 read %c\n",thechar);
    fclose(fp);
}