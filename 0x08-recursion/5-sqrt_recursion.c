#include "main.h"
/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: number
 * @i: incrementer
 *
 * Return: natural square root of n
 */
int _sqrt(int n, int guess)
{
if (n < 0 || guess * guess > n)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
if (guess * guess == n)
{
return (guess);
}
return (_sqrt(n, guess + 1));
}
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
