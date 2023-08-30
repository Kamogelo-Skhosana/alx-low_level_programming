#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number or arguments
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, int *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
