#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
}
