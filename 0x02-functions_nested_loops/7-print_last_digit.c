#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @c: the number
 * Return: last digit of number
 */
int print_last_digit(int c)
{
int last = c % 10;
if (last < 0)
{
last = -last;
}
_putchar(last + '0');
return (last);
}
