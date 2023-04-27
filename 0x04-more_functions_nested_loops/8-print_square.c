#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
