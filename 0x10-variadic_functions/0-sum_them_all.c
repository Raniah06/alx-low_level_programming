#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list args;
int sum = 0;

va_start(args, n);
if (n !=NULL)
{
for (i = 0; i < n; i++)
if (va_arg(args, int) != NULL)
sum += va_arg(args, int);

va_end(args);
}
return (sum);
}
