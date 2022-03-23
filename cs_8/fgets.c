#include <stdio.h>
#include <stdlib.h>

int main(){
    char fileName[64] = "fgets.c";
    char line[256];
    int line_no = 0;
    FILE* file = fopen(fileName, "r");

    while(fgets(line, sizeof(line),file) != NULL){
        printf("%.02d %s", ++line_no, line);
    }
    fclose(file);
    return 0;
}