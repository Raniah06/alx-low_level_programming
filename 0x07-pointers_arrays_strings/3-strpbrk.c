#include "main.h"

/**
 * _strpbrk - Search a string.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches or NULL if not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
