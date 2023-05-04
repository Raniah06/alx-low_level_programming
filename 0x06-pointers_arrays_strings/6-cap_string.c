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
while (!( str[i] > 96 && str[i] < 123))
i++;
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == ';' || str[i - 1] == ',' || str[i - 1] == '?' || str[i - 1] == '!' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}'
{
str[i] -= 32;
}
}
return (str);
}
