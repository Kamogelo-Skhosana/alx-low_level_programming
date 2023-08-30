#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to str
 * @s2: pointer to str
 * @Return: negative pisitive view
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
