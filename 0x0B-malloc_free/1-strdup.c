#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string in memory.
 * @str: The string to be duplicated.
 * Return: A pointer
 */
char *_strdup(char *str)
{
char *dup;
int i, len;
if (!str)
{
return (NULL);
}
for (len = 0; str[len]; len++)
{
}
dup = malloc(sizeof(char) * (len + 1));
if (!dup)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
dup[i] = str[i];
}
dup[i] = '\0';
return (dup);
}
