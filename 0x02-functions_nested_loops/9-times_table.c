#include "main.h"
#include <stdio.h>
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
for (j = 1; j <= 9; i++)
{
int k = i * j;
printf(i * j); 
if (k <= 9)
{
printf(k);
_putchzr(',');
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
