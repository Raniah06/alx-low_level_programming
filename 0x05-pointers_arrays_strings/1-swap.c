#include "main.h"

/**
 * swap_int - swaps the values of two inputs.
 * @a: first  number.
 * @b: second number.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
