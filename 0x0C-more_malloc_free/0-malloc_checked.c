#include "main.h"

/**
 * malloc_checked - If malloc fails, terminate process with status 98.
 * @b: unsigned
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
