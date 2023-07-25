#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
int i;
int j = 0;
char temp[length];
for(i = length - 1; i >= 0; i--)
{
temp[j] = s[i];
j++;
}
}
