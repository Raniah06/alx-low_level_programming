#include "main.h"

/**
 * rev_string - returns the string in reverse
 *
 * @s: this is the string
 *
 * Return: no return
 */
void rev_string(char *s)
{
int i, j, k;
char *str, temp;
for (i = 0; s[i] != '\0' ; i++)
;
str = s;
for (k = 0; k < (i - 1); k++)
{
for (j = k + 1; j > 0; j--)
{
temp = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = temp;
}
}
}
