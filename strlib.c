#include "strlib.h"

int puts_ (const char *str)
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

char *strchr_ (const char *str, int sym)
{
    for (; (*str != '\0') && (*str != sym); str++)
        ;

    return (*str == sym) ? str : NULL;
}

size_t strlen_ (const char *str)
{
    return strchr_ (str, '\0') - str;
}

char *strcpy_ (char *dest, const char *src)
{
    char *desttmp = dest;

    while ((*dest++ = *src++) != '\0')
        ;

    return desttmp;
}

char *strncpy_ (char *dest, const char *src, size_t n)
{
    size_t i = 0;

    for (i = 0; (i < n) && (src[i] != '\0'); i++)
    {
        dest[i] = src[i];
    }
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

char *strcat_ (char *dest, const char *src)
{
    strcpy_ (strlen_ (dest) + dest, src);

    return dest;
}

char *strncat_ (char *dest, const char *src, size_t n)
{
    size_t dest_len = strlen_ (dest);
    
    if (n > dest_len)
    {
        strncpy_ (dest + dest_len, src, n - dest_len);
    }

    dest[n - 1] = '\0';
    return dest;
}

char *fgets_ (char *str, int size, FILE *stream)
{
    int buffer = '\0';
    size_t i = 0;

    for (i = 0; (i < size - 1) && (buffer != EOF) && (buffer != '\n'); i++)
    {
        buffer = getc (stream);
        str[i] = buffer;
    }

    if (buffer == EOF)
    {
        str[i - 1] = '\0';
    }
    else
    {
        str[i] = '\0';
    }

    if ((i < size - 1) && (buffer == EOF))
    {
        return NULL;
    }
    else
    {
        return str;
    }
}

