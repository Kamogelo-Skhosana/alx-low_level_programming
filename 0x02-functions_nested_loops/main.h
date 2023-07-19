#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
void print_alphabet(void)
{
chat letter ='a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
letter = 'a';
print_alphabet();
}
