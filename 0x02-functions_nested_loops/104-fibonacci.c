#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (always)
 */
int main(void)
{
unsigned int i;
unsigned int prev = 1;
unsigned int current = 2;
printf("%u, %u", prev, current);
for (i = 3; i <= 98; i++)
{
unsigned int next = prev + current;
printf(", %u", next);
prev = current;
current = next;
}
printf("\n");
return 0;
}
