#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
int   i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == '\0')
{
_putchar('\n');
break;
}
if (i % 2 == 0)
_putchar(str[i]);
}
}
