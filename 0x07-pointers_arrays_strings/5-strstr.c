#include "main.h"
/**
 * _strstr - locates a substring in string.
 * @haystack: pointer to string
 * @needle: pointer to substring on string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
h = haystack;
n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
