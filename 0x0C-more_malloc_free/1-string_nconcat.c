#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concatenate.
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i, j, s1_len, s2_len;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (s1_len = 0; s1[s1_len]; s1_len++)
{
;
}
for (s2_len = 0; s2[s2_len]; s2_len++)
{
;
}
if (n >= s2_len)
{
n = s2_len;
}
result = malloc(sizeof(char) * (s1_len + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
}
