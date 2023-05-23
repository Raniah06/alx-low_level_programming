#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, k, n;
dog_t *dogy;

for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
dogy = malloc(sizeof(dog_t));
if (dogy == NULL)
return (NULL);
dogy->name = malloc(i  * sizeof(dogy->name));
dogy->owner = malloc(j * sizeof(dogy->owner));
if (dogy->name == NULL || dogy->owner == NULL)
{
free(do->name);
free(do->owner);
free(do);
return (NULL);
}
for (k = 0; k <= i; k++)
dogy->name[k] = name[k];
dogy->age = age;

for (n = 0; n <= j; n++)
dogy->owner[n] = owner[n];

return (dogy);
}
