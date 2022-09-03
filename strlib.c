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


