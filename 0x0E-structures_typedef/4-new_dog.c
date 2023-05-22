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
dog_t *new;

new = malloc(sizeof(dog_t));
if (new == NULL)
{
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
new->name = malloc(i * sizeof(new->name));
new->owner = malloc(j * sizeof(new->owner));

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
