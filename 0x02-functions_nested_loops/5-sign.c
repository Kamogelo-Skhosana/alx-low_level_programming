#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: the variable
 * retur : 1 n, 0 or -1 n
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+'0);
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else 
{
_purchar('-');
return (-1);
}
}
