#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
				_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}

