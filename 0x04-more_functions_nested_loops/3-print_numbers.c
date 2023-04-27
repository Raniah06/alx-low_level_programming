#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return but print.
 */
void print_numbers(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
