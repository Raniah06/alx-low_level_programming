#include "main.h"

/**
 * reverse_array - reverse the array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int s;

	for (i = 0; i < n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = s;
	}
}
