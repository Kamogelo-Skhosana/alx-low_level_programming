#include <stdio.h>
/*
 * printing lowercase letters
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; ++letter)
{
putchar(letter);
}
putchar('\n');
return (0);
}
