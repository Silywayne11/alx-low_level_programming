#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of elements in the list
  */

size_t print_list(const list_t *h)
{
size_t nelem;

nelem = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
nelem++;
}

return (nelem);
}
