#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer in memory
 * @str: string to be copied
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
int i;
int len;
char *newStr;
{
if (str == NULL)
{
return NULL;
}
len = 0;
while (str[len] != '\0')
{
len++;
}
newStr = malloc(sizeof(char) * (len + 1));
if (newStr == NULL)
{
return NULL;
}
for (i = 0; i <= len; i++)
{
newStr[i] = str[i];
}
return newStr;
}}
