#include "strlib.h"

int puts (const char *str)
{
    int status = EOF;

    for (; *str != '\0'; str++)
    {
        status = putchar (*str);
        if (status == EOF)
        {
            return EOF;
        }
    }

    return putchar ('\n');
}

char *strchr (const char *str, int sym)
{
    for (; (*str != '\0') && (*str != sym); str++)
        ;

    return (*str == sym) ? str : NULL;
}

size_t strlen (const char *str)
{
    return strchr (str, '\0') - str - 1;
}

char *strcpy (char *dest, const char *src)
{
    char *desttmp = dest;

    while ((*dest++ = *src++) != '\0')
        ;

    return desttmp;
}

char *strncpy (char *dest, const char *src, size_t n)
{
    size_t i = 0;

    for (; (i < n) && (src[i] != '\0'); i++)
    {
        dest[i] = src[i];
    }
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

