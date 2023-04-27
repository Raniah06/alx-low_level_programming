#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 1; i < n; i++)
{
_putchar(' ');
}
_putchar('/');
}
_putchar('\n');
}
