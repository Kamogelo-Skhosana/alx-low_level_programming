#include <stdio.h>
#include "main.h"
/**
 * _putchar - Entry point
 * @s: character
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
