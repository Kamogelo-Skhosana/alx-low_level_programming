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
char *array;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size);
if (array == NULL)
{
return (NULL);
}
int i;
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
