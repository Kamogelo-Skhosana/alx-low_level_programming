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
return NULL;
}
char *array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return NULL;
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
int main()
{
unsigned int size = 10;
char character = 'A';
char *result = create_array(size, character);
if (result == NULL)
{
return (1);
}
for (unsigned int i = 0; i < size; i++)
{
printf("%c ", result[i]);
}
printf("\n");
free(result);
return (0);
}
