#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars, initializing with  specific char
 * @size: Number elements array
 * * @c: char
 * Return: pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
