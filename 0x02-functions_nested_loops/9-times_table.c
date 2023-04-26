#include "main.h"
/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; i++)
{
int k = i * j;
if (k <= 9)
{
_putchar(' ');
}
else
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
