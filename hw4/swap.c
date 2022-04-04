#include <stdio.h>
void swap(int i, int j) {
    int temp;
    temp = i;
    i =j;
    j =temp;
}

int main(int argc, char *argv[]) {
    int a=3, b=5;
    printf("before a= %d, b= %d\n",a,b);
    swap(a,b);
    printf("after a= %d, b= %d\n",a,b);
    return(0);
}