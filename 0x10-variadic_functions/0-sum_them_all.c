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

for (i = 0; i < n; i++)
{
unsigned int num = va_arg(args, int);
sum += (num == NULL) ? 0 : num;
}

va_end(args);

return (sum);
}
