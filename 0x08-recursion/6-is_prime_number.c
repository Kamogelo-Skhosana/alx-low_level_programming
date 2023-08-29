#include "main.h"
/**
 * is_prime - helper function for is_prime_number
 * @n: number
 * @i: incrementer
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime(int n, int i)
{
if (n == i)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime(n, i + 1));
}
/**
 * is_prime_number - return 1 if int is
 * otherwise return 0
 * @n: number
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime(n, 2));
}
