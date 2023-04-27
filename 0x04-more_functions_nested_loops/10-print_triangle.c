#include "main.h"

/**
 * print_triangle - prints a triangle of#.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j, z;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
	  _putchar(' ');
		for (z = (size - i); z <= size; z++)
			_putchar(35);

		_putchar('\n');
	}
	_putchar('\n');
}
