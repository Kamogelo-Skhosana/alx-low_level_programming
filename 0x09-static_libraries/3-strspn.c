#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string char
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int got;
while (*s)
{
got = 0;
char *a = accept;
while (*a)
{
if (*s == *a)
{
got = 1;
break;
}
a++;
}
if (!got)
{
break;
}
i++;
s++;
}
return (i);
}
