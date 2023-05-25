#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        const char *s = va_arg(args, const char *);
        if (s == NULL)
            printf("(nil)");
        else 
            printf("%s", s);
        
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
