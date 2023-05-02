#include "main.h"

/**
 * print_rev - returns the string in reverse
 *
 * @s: this is the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
int i, j;
for (i = 0; s[i] != '\0' ; i++)
;
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
