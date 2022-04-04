#include<stdio.h>

int main(int argc, char *argv[]) {

  int a[]={1,2,3,4,5,6,7};

  int i;

  int *p = a; //  equivalent to p = a;
  
  // lots of ways to print the address of the array. 

  // array names such as a or variables such as i have addresses in memory
  // &a and &i, respectively. These are called address constants or address constants
  // They can't be changed.

  // Note, with pointer or array arithmetic that what is added e.g., interger 1
  // in terms of address is dependant on the type. array a is an array of integers
  // so adding 1 would add 04 to the address. If it was a char array then only 1 
  // would be added to the address computation

  printf("addresses: &a = %p a+1 = %p p+1 = %p\n", (void *)&a, (void *)(a+1), (void *)(p+1));

  // because a is an array name and therefore an address you can just use a instead of &a

  printf("addresses:  a = %p a+1 = %p p+1 = %p\n", (void *)a, (void *)(a+1), (void *)(p+1));

  // Now lets see the various ways we can look at the content of variables using
  // array and pointer arithmetic. Not the indirection operator * is used to
  // access data i.e., the contents of what the pointer is pointing to.

  
  printf("addresses: a[1] = %d *(a+1) = %d *(p+1) = %d p[1] = %d\n", a[1], *(a+1), *(p+1), p[1]);

  // we can use a variable such as i with arrays of course but also for pointer arthimetic

  i=2;

  printf("addresses: a[i] = %d *(a+i) = %d *(p+i) = %d p[i] = %d\n", a[i], *(a+i), *(p+i), p[i]);

  // Here we make p point to 0. NULL pointers have significance in C. Because all objets have
  // non zero addresses a NULL pointer always represents an invalid address. Functions can
  // can return pointers and indicate failure by returning a NULL pointer.

  p=NULL;

  // Some times people get confused with the * operator. It has two meanings:

  // When * is used when declaring a pointer char *ptr  means ``pointer to'' a character, e.g.,

  char *ptr = "andrew";
  char  c;

  // but when not used in the declaration of a pointer (e.g., *ptr). The indirection operator *
  // is used to access the data by means of pointer ptr. Therefore,  c = *ptr 
  // but the object (a) into variable c
  
  c=*ptr;

  printf("ptr = %p, *ptr = %c, c = %c\n", (void *)ptr, *ptr, c);

  return 0;
}