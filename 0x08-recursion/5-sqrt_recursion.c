#include "main.h"
/**
 * _sqrt - helper function for _sqrt_recursion
 * @n: number
 * @i: incrementer
 *
 * Return: natural square root of n
 */
int _sqrt(int n, int i)
{
if (n < 0 || i * i > n)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
if (i * i == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}
/**
 * * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
