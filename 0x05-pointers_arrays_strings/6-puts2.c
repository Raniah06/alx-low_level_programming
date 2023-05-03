#include "main.h"

/**
 * puts2 - takes a pointerand updates its value.
 * @str: input.
 * Return: no return.
 */
void puts2(char *str)
{
for (int i = 0; str[i] != '\0' ; i = i + 2)
{
	_putchar(str[i]);
} 
}
