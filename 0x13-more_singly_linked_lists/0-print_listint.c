#include "lists.h"
#include<stddef.h>
#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * print_listint - A function that prints all the elements of
 *                 a listint_t list.
 * @h: pointer to the head of the list_t list.
 *
 * Return: Number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
