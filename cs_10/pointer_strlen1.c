#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* s){
    int len = 0;
    for(int i = 0; ;i++){
        if(s[i] == '\0'){
            break;
        }
        else{
            len++;
        }
    }
    return len;
}

int main(){
    char s[] = "IU is a girl!";
    printf("len = %d\n",my_strlen(s));
    return 0;
}