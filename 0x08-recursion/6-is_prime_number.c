#include "main.h"

/**
  * is_prime_number - Returns if a number is prime
  *
  * @n: The number to be checked
  *
  * Return:1 if is Prime number or 0 if no
  */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
  * _prime - Check if number is prime
  *
  * @n: The number to be counted
  * @i: The iteration count
  *
  * Return: 1 for prime or 0 composite
  */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if (n %  i != 0 && i > 1)
		return (1);

	return (_prime(n, i + 1));
}
