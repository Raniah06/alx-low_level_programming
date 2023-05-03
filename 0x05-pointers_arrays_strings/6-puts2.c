#include "main.h"

/**
 * puts2 - takes a pointerand updates its value.
 * @str: input.
 * Return: no return.
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0' ; i = i + 2)
{
if (str[i] == '\0')
{
_putchar('\n');
break;
}
else
_putchar(str[i]);
} 
}

