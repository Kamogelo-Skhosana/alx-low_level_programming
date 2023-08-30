#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc < 2)
{
return (printf("0\n"), 0);
}
int i, j, total = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; arg[i] != '\0'; j++)
{
if (arg[j] < '0' || arg[j] > '9')
{
return (printf("Error\n"), 1);
}
}
total += atoi(arg);
}
return (printf("%d\n", total), 0);
}
