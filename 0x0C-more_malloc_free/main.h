#ifndef MAIN_H
#define MAIN_H



#include <stdlib.h>
#include <string.h>


int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);


#endif
