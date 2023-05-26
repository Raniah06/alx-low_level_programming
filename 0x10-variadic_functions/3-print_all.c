
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

    while (format && format[n]) {
        c = format[n];
        switch (format[n]) {
            case 'c':
                c = va_arg(args, char);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s", s);
                }
                break;
            default:
                break;
        }
        n++;
        if (format[n] != '\0' && (format[n] == 'c' || format[n] == 'i' || format[n] == 'f' || format[n] == 's')) {
            printf(", ");
        }
    }

    va_end(args);

    printf("\n");
}
