#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string.
 * @s: String.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
;
}
return (i);
}
/**
 * _strcpy - Copies a string.
 * @dest: Destination.
 * @src: Source.
 * Return: Pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (!new_dog)
{
return (NULL);
}
new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (!new_dog->name)
{
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (!new_dog->owner)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->owner = _strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
