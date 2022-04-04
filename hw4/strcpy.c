/*
  File: strcpy.c

  Description: Copies a source string to a destination. Keeps copying
  until it finds the NULL char in the source char string

  Input: char pointers for source (s2) and destination (s1) 

  Output: returns the pointer to the destinatio (s1)
*/ 

#include<stdio.h>
#include<stdlib.h>

char *my_strcpy(char * , const char * );

int main()
{

  char src[] = "cs23!";
  char dst[]="Hello hello";
  char *curdst;
  int len=0;

  printf("src address %p and first char %c \n", (void *)&src, src[0]); 
  printf("dst address %p and first char %c \n", (void *)&dst, dst[0]); 
  
  // compute where NULL character is '\0' ASCII 0

  while(src[len++]);

  // print out the char arrays and various addresses.

  printf("src array %s and last element %d\n", src, atoi(&src[len]));  
  printf("dst array %s and last element %c\n", dst, dst[len]);  

  // do the copy

  curdst= my_strcpy(dst, src); 

  // check to see if the NULL char is copied too.

  printf("dst array %s and last element %d\n", dst, atoi(&dst[len]));  

  return 0;

}

char *my_strcpy(char *s1, const char *s2) {

  register char *d = s1;

  // print the pointer variables address and their contents, and first char

  printf("s2 address %p, its contents is a pointer %p to first char %c \n", (void *)&s2, (void *)s2, *s2); 
  printf("s1 address %p, its contents is a pointer %p to first char %c \n", (void *)&s1, (void *)s1, *s1); 

  while ((*d++ = *s2++));
  return(s1);

}