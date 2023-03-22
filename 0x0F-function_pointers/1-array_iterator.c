#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: is the size
 * @action: is something
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
