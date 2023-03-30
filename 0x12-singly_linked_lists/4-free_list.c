#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - A function that frees a list_t list.
 * @head: pointer to the list.
 */

void free_list(list_t *head)
{
list_t *actual_node;
list_t *next_node;

if (head)
{
actual_node = head;
next_node = head->next;
while (next_node)
{
free(actual_node->str);
free(actual_node);
actual_node = next_node;
next_node = next_node->next;
}
free(actual_node->str);
free(actual_node);
}
}
