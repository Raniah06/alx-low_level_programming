#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @src:source buffer
 * @dest: destination buffer
 * @n: number of bytes of memory to fill
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}
