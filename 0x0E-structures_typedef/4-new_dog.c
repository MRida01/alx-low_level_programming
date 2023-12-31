#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * new_dog - creates a new dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: returns the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = strdup(name);
newDog->owner = strdup(owner);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
newDog->age = age;
return (newDog);
}
