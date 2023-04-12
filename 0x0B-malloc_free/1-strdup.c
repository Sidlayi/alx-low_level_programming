#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to an allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; str[c]; c++)
	{
		s[c] = str[c];
	}
	return (s);
}
