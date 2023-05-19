#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j;
 unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != '\0'; k++)
		;

	p = malloc((k + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = 0; i < (k + n); i++)
	{
		if (i < k)
			p[i] = s1[i];
		else
			p[i] = s2[j++];
	}
	p[i] = '\0';

	return (p);
}
