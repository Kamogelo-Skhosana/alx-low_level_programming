#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to str
 * Return: str length
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
