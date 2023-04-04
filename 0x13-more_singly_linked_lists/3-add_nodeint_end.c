#include "lists.h"

/**
 * *add_nodeint_end - A function that adds new node to end of listint_t
 *
 *@head: A pointer to pointer of head of linked list
 *@n: The integer for the new node to contain.
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last = *head;
listint_t *new_node = NULL;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL && n != 0)
return (NULL);
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
return (new_node);
}
