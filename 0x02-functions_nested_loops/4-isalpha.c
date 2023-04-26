#include "main.h"
/**
*  int _isalpha(int c) :- in lowercase or upper for int c.
* Return: Always 1 if lower (Success) else 0
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 89) 
{
return (1);
}
else
{
return (0);
}
}
