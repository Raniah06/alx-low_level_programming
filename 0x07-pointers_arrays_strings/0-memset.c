#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer
 * @b: constant byte
 * @n: number of bytes of memory to fill
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
