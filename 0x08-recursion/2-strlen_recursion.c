#include "main.h"

/**
 * _strlen_recursion - Print length of string
 * @s: string
 */

int _strlen_recursion(char *s)
{
int c = 0;
if (*s != '\0')
{
c++;
_puts_recursion(++s);
}
return (c);
}
