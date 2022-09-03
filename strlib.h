#ifndef STRLIB_H_INCLUDED
#define STRLIB_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int puts (const char *str);

char *strchr (const char *str, int sym);

size_t strlen (const char *str);

char *strcpy (char *dest, const char *src);

char *strncpy (char *dest, const char *src, size_t n);

#endif

