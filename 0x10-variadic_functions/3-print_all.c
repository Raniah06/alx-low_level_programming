#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);
    char *s;
    int n = 0;

    while (format && format[n])
    {
        switch (format[n])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                    s = "(nil)";
                printf("%s", s);
                break;
            default:
                continue;
        }
      
        if (format[n])
            printf(", ");
        n++;
   } 
    printf("\n");
    va_end(args);
} 
