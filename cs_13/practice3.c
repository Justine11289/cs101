#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_str_array(int size){
    return (char*)calloc(size,sizeof(char));
}

int main(){
    int size = 8;
    char* ps[4];
    for(int i = 0; i < 4; i++){
        ps[i] = get_str_array(size);
        strcpy(ps[i],"IU!IU!");
        printf("ps[%d] (%p)= %s\n",i,&ps[i],ps[i]);
        free(ps[i]);
        ps[i] = NULL;
    }
    return 0;
}