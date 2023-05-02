#include "main.h"

/**
 * _puts - returns the string
 *
 * @str: this is the string
 *
 * Return: no return
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
