#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory
 * @nmemb: unsigned int member
 * @size: unsigned int type size
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

i = 0;
while (i < nmemb)
{
p[i] = 0;
i++;
}
return (p);
}
