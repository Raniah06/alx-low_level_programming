#include "main.h"
/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (isPrime(n, 2));
}
/**
 * isPrime - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @i: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int isPrime(int n, int i)
{
if(n > 1)
{
if(n % i == 0)
{
return 1; 
}
isPrime(n, i + 1);
}
else
return 0;

return -1;
}
