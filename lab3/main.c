#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* s){
    int len = 0;
    for(int i = 0;s[i] != '\0';i++){len++;}
    return len;
}

int rec_strlen(char* s){
    if(s[0] == '\0') {return 0;}
    else {return rec_strlen(s+1)+1;}
}
 
char* my_sort(char* s){
    for(int i = 0; *(s+i) != '\0';i++){
        for(int j = i+1; *(s+j) != '\0';j++){
            if(*(s+i) >= *(s+j)){
                char tmp = *(s+i);
                *(s+i) = *(s+j);
                *(s+j) = tmp;
            }
        }
    }
    return s;
}

int main(){
    char s[] = "IU is a girl!";
    printf("len = %d\n", my_strlen(s));
    printf("len = %d\n", rec_strlen(s));
    printf("sort = %s\n", my_sort(s));
    return 0;
}