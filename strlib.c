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

