#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp;
    fp = fopen("a.bin","wb+");
    char char_array[5]={'H','e','l','l','o'};
    int int_array[5]={1,2,3,4,5};
    float float_array[5]={1.1,1.2,1.3,1.4,1.5};
    for(int i=0; i<5; i++){
        fprintf(fp,"%d ",char_array[i]);
    }
    fprintf(fp,"\n");
    for(int i=0; i<5; i++){
        fprintf(fp,"%d ",int_array[i]);
    }
    fprintf(fp,"\n");
    for(int i=0; i<5; i++){
        fprintf(fp,"%f ",float_array[i]);
    }
    fprintf(fp,"\n");
    fclose(fp);
}