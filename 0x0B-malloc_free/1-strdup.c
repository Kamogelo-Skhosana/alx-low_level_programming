#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer in memory
 * @str: string to be copied
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return NULL;
}
int length = 0;
while (str[length] != '\0')
{
length++;
}
char *newStr = (char *)malloc((length + 1) * sizeof(char));
if (newStr == NULL)
{
return NULL;
}
for (int i = 0; i <= length; i++)
{
newStr[i] = str[i];
}
return newStr;
}
