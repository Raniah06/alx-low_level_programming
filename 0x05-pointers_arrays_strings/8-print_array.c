#include "main.h"

/**
 * print_array - returns the half string
 *
 * @a: this is the string
 * @n: array size
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
if (i == n - 1)
{
_putchar(a[i]);
_putchar('\n');
break;
}
_putchar(a[i]) ;
_putchar(', ');
}
}
