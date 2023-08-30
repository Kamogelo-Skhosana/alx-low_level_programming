#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory
 * @old_size: Old size.
 * @new_size: New size
 * Return: Pointer to the new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *result;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
result = malloc(new_size);
if (result == NULL)
{
return (NULL);
}
return (result);
}
result = malloc(new_size);
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < old_size && i < new_size; i++)
{
result[i] = ((char *)ptr)[i];
}
free(ptr);
return (result);
}
