#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 * @s: this is a parameter to change.
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}
