#include "main.h"
 /**
 * _atoi- returns numbers in string
 *
 * @s: this is the string
 *
 * Return: return result
 */
int _atoi(char *s)
{
int res = 0, i;
for (i = 0; s[i] != '\0'; ++i)
res = res * 10 + s[i] - '0';
return (res);
}
