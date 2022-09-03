#ifndef STRLIB_H_INCLUDED
#define STRLIB_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int puts_ (const char *str);

char *strchr_ (const char *str, int sym);

size_t strlen_ (const char *str);

char *strcpy_ (char *dest, const char *src);

char *strncpy_ (char *dest, const char *src, size_t n);

char *strcat_ (char *dest, const char *src);

#endif

