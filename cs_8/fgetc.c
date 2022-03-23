#include <stdio.h>
#include <stdlib.h>

int main(){
    char fileName[64] = "fgetc.c";
    char line_ch;
    int line_no = 0;
    FILE* fp = fopen(fileName, "r");
    printf("%02d", ++line_no);
    while((line_ch = fgetc(fp)) != EOF) {
        if(line_ch == '\n'){
            printf("\n%.02d", ++line_no);
        }
        else{
            printf("%c",line_ch);
        } 
    }
    fclose(fp);
    return 0;
}