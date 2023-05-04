#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char string
 * @src: char string
 * @n: numbers to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
	;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
