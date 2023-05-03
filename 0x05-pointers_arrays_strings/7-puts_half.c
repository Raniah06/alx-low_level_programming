#include "main.h"

/**
 * puts_half - returns the half string 
 *
 * @str: this is the string
 *
 * Return: no return
 */
void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0' ; i++)
;
for (j = (i - 1) / 2; j = i; j++)
{
_putchar(str[i]) ;
}
_putchar('\n');
} 
