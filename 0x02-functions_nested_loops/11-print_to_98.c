#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * Return: sequence os numbers
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i < 98; i++)
{
_putchar("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
_putchar("%d, ", i);
}
}
_putchar("%d\n", 98);
}
