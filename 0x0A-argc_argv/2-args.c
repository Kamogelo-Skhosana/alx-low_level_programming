#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
