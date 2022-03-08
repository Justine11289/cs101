#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    char s1[8] = "hi, ",s2[8] = "CGU";
    strcat(s1,s2);
    printf("%s\n\n",s1);

    char s3[16] = "Hello",s4[8] = "IU\n";
    strncat(s3,s4,2);
    printf("%s\n",s3);
    printf("%s\n",s4);
}