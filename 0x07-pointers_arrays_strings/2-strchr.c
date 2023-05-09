#include <stdlib.h>
#include "main.h"
/**
 * _strchr - Search a character in a string
 *
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
