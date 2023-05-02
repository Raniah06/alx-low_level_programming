#include "main.h"

/**
 * _puts - returns the string
 *
 * @s: this is the string
 *
 * Return: the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
        {
             _putchar(str[i]);
        }
        _putchar('\n');
}
