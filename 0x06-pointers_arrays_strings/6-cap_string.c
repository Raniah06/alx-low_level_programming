#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if(str[0] > 96 && str[0] < 123)
{
c[0] -= 32;
}
else if (str[i] = ' ' && str[i + 1] > 96 && str[i + 1] < 123)
{
str[i + 1] -= 32;
}
}
return (str);
}
