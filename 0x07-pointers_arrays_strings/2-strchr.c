#include "main.h"

/**
 * _strchr - Find first character
 * @s : string array
 * @c: character to be finded
 * Return: Pointer to array
 */

char *_strchr(char *s, char c)
{
     while (*s != '\0')
     {
          if (*s == c)
          {
               return (s);
          }
          s++;
     }
     return (NULL);
}
