#include <stdio.h>
/**
 * main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
 * for multiples of both 3 and 5. Otherwise, prints the number.
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if ( i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
