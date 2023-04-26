#include "main.h"
/**
 * print_last_digit - prints the last digit of number n
 * @n: Number to be tested
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)
{
l = -l;
}
_putchar((l + '0' + l);
return (l);
}
