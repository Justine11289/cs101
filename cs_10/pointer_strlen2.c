#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* s){
    if(s[0] == '\0'){
        return 0;
    }
    else{
        return my_strlen(s+1)+1;
    }
}

int main(){
    char s[] = "IU is a girl!";
    printf("len = %d\n",my_strlen(s));
    return 0;
}
