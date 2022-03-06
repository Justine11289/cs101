#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[50];
    printf("Enter string:");
    fgets(str,50,stdin);
    printf("You entered:");
    puts(str);
    printf("\n");
}