#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j == 0)
{
}
else if (result <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
