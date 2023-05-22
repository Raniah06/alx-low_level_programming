#include <stdio.h>
#include <stdlib.h>
#include "main.h"

dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, k;

dog_t *new = malloc(sizeof(dog_t));
if (new == NULL)
{
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
new->name = malloc(sizeof(char) * i + 1);
new->owner = malloc(sizeof(char) * j + 1);

if (new->name == NULL || new->owner == NULL)
{
free(new->name);
free(new->owner);
free(new);
return (NULL);
}
for (k = 0; k <= i; k++)
n[k] = name[k];
for (k = 0; k <= j; k++)
o[k] = owner[k];

new->age = age;

return (new);
}
