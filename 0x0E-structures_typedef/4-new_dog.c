#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, k;
dog_t *do;

do = malloc(sizeof(dog_t));
if (do == NULL)
{
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
do->name = malloc(i * sizeof(do->name));
do->owner = malloc(j * sizeof(do->owner));

if (do->name == NULL || do->owner == NULL)
{
free(do->name);
free(do->owner);
free(do);
return (NULL);
}
for (k = 0; k <= i; k++)
do->name[k] = name[k];
for (k = 0; k <= j; k++)
do->owner[k] = owner[k];

do->age = age;

return (do);
}
