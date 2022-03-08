#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int iu_age = 18;
    int n = snprintf(NULL,0,"IU is %d years old",iu_age);
    printf("n=%d\n",n);
    char s1[n+1];
    snprintf(s1,sizeof(s1),"IU is %d years old",iu_age);
    printf("%s\n",s1);
}