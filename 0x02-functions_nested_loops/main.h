#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#include <stdio.h>
/* 0. Print _putchar followed by a new line */
int _putchar(char c)
{
return putchar(c);
}
/* 1. Print the alphabet in lowercase */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
/* 2. Print 10 times the alphabet in lowercase */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
/* 3. Check if a character is lowercase */
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
/* 4. Check if a character is alphabetic */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/* 5. Print the sign of a number */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return 1;
}
else if (n == 0)
{
_putchar('0');
return 0;
}
else
{
_putchar('-');
return -1;
}
}
/* 6. Compute the absolute value of an integer */
int _abs(int n)
{
return (n < 0) ? -n : n;
}
/* 7. Print the last digit of a number */
int print_last_digit(int n)
{
int last_digit = _abs(n % 10);
_putchar(last_digit + '0');
return last_digit;
}
/* 8. Print every minute of the day */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
/* 9. Print the 9 times table */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j != 0)
{
putchar(',');
putchar(' ');
}
if (result <= 9)
{
putchar(' ');
}
else
{
putchar((result / 10) + '0');
}
putchar((result % 10) + '0');
}
putchar('\n');
}
}
/* 10. Add two integers and return the result */
int add(int a, int b)
{
return a + b;
}
/* 11. Print natural numbers from n to 98 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("%d\n", 98);
}
#endif /* HEADER_FILE_H */
