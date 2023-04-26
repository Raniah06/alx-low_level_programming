#include "main.h"

/**
 * print_alphabet_10x :- in lowercase ten times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabetl_x10(void)
{
int i,j;
for (j =0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
_putchar('\n');
}
