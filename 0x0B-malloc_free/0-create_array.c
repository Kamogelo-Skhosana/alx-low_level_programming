#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: char to initialize the array
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *array = (char *)malloc(size);
if (array == NULL)
{
return (NULL); // Memory allocation failed
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
