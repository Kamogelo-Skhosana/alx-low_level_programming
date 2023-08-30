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
char *arr;
if (size <= 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}
memset(arr, c, size);
return (arr);
}
