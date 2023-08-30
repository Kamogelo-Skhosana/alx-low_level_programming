#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer in memory
 * @str: string to be copied
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
int i;
int length = 0;
char *newStr = (char *)malloc((length + 1) * sizeof(char));
{
if (str == NULL)
{
return NULL;
}
while (str[length] != '\0')
{
length++;
}
if (newStr == NULL)
{
return NULL;
}
for (i = 0; i <= length; i++)
{
newStr[i] = str[i];
}
return newStr;
}
