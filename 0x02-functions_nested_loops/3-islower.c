#include "main.h"

/**
 *  int _islower(int c) - checks if parameter c in lowercase if so return (1) else return (0).
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
