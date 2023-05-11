#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt -  function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt(int n, int i)
{
	int sq = i * i;

	if (sq == n)
		return (i);
	else if (sq < n)
		return (sqrt(n, i + 1));
	else
		return (-1);
}
