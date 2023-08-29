#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * round_one - check for palindrone
 * @s: string
 * @len: length of string
 * Return: 1 or 0
 */
int round_one(char *s, int len)
{
if (len <= 1)
{
return (1);
}
if (*s != *(s + len - 1))
{
return (0);
}
return (round_one(s + 1, len - 2));
}
/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
int len = 0;
if (*s == '\0')
{
return (1);
}
len = _strlen_recursion(s);
return (round_one(s, len));
}
