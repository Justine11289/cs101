#include <stdio.h>
#include <stdlib.h>
  
void swap(int *ip, int *jp) {
    int temp;
    temp = *ip;
    *ip = *jp;
    *jp = temp;
}
 
int main(int argc, char *argv[]) {
    int a=3, b=5;
    printf("before a= %d, b= %d\n",a,b);
    swap(&a, &b);
    printf("after a= %d, b= %d\n",a,b);
    return EXIT_SUCCESS;
}