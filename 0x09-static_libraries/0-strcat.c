#include "main.h"
/**
 * _strcat - add 2 strings together
 * @dest: pointer for str
 * @src: pointer to str
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return ptr;
}
