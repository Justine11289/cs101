#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_str_array(int size){
    return (char*)calloc(size,sizeof(char));
}

int main(){
    int size = 8;
    char* ptr = NULL;
    ptr = get_str_aray(size);
    strcpy(ptr,"IUIUIU!");
    printf("%s\n",ptr);
    
    free(ptr);
    ptr = get_str_aray(size<<=1); //再要⼀次記憶體空間
    strcpy(ptr,"IUIUIUIUIU!");
    printf("%s\n",ptr);
    return 0;
}