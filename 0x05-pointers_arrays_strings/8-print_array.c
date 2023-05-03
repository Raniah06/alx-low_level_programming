#include "main.h"
#include <stdio.h>

/**
 * print_array - returns string
 *
 * @a: this is the string
 * @n: array size
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
int i;
for (i  = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
