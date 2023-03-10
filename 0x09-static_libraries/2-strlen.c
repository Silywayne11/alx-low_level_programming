#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string.
 * @str: The string to get length of
 * Return: The length of @str.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
