#include "main.h"

/**
 * rev_string - returns the string in reverse
 *
 * @s: this is the string
 *
 * Return: no return
 */
void rev_string(char *s)
{
int i, j;
for (i = 0; s[i] != '\0' ; i++)
{
_putchar(s[i]);
}
_putchar('\n');
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
