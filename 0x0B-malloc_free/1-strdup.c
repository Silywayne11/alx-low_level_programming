#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	s = malloc(i + 1);
	if (s == 0 || s == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		s[i] = *(str + i);
	}
	s[i] = *(str + i);
	return (s);
}
