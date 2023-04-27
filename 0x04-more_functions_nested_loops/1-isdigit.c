#include "main.h"

/**
 * _isdigit - checks if number between 0 to 9.
 * @c: input digit.
 * Return: 1 if  (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

