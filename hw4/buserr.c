#include<stdio.h>

int main(){
    int a, b, *p;
    a=5;
    b=6;
    p=&b;

    printf("contents of a is %d, b is %d, the address of p (&p) is %p, p's contents is %p and it points to %d \n", a, b, (void *)&p, (void *)p, *p);

    a=*p; // a = b

    printf("contents of a is %d, b is %d, the address of p (&p) is %p, p's contents is %p and it points to %d \n", a, b, (void *)&p, (void *)p, *p);

    p=(int *)1;

    printf("contents of a is %d, b is %d, the address of p (&p) is %p, p's contents is %p \n", a, b, (void *)&p, (void *)p);
   
    a=*p; // What will happen
  
    return 0;
}