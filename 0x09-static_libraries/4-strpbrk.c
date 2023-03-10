#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: source string
 * @accept: accepted characters
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
