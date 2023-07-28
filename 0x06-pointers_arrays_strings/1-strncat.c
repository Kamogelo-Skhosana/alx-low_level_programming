#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to str
 * @src: pointer to str
 * @n: bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return ptr;
}
