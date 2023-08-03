#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (always)
 */
int main(void)
{
int first = 1;
int second = 2;
int next;
long long sum = 0;
while (second <= 4000000)
{
if (second % 2 == 0)
{
sum += second;
}
next = first + second;
first = second;
second = next;
}
printf("%lld\n", sum);
return 0;
}
