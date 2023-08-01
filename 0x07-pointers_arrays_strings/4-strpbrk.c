#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: poiter to dtring char
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
