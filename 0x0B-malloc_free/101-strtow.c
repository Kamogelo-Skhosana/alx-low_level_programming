#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
int countWords(char *str) {
int count = 0;
int isWord = 0;
while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
if (isWord)
{
isWord = 0;
}
}
else
{
if (!isWord)
{
isWord = 1;
count++;
}
}
str++;
}
return (count);
}
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
{
return (NULL);
}
int numWords = countWords(str);
if (numWords == 0)
}
return (NULL);
}
char **words = (char **)malloc((numWords + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
int wordIndex = 0;
int wordStart = 0;
int i = 0;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
if (wordStart < i)
{
int wordLength = i - wordStart;
words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
if (words[wordIndex] == NULL)
{
For (int j = 0; j < wordIndex; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[wordIndex], &str[wordStart], wordLength);
words[wordIndex][wordLength] = '\0';
wordIndex++;
}
wordStart = i + 1;
}
i++;
}
if (wordStart < i) {
int wordLength = i - wordStart;
words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
if (words[wordIndex] == NULL)
{
for (int j = 0; j < wordIndex; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[wordIndex], &str[wordStart], wordLength);
words[wordIndex][wordLength] = '\0';
wordIndex++;
}
words[wordIndex] = NULL;
return (words);
}
void freeWords(char **words)
{
if (words == NULL)
{
return ();
}
for (int i = 0; words[i] != NULL; i++)
{
free(words[i]);
}
free(words);
}
