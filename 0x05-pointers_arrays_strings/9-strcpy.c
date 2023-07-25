#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to str
 * @src: pointer to str
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
