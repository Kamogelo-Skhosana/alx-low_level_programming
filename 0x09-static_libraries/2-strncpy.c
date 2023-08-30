#include "main.h"
/**
 * _strncpy -  copies a string
 * @dest: pointer to str
 * @src: pointer to str
 * @n: bytes
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *ptr = dest;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (ptr);
}
