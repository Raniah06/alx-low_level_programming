#include "main.h"

/**
 * _strncpy - copy from src to dest
 * @dest: char string
 * @src: char string
 * @n: numbers to concatenate
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
return (dest);
}
