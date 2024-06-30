#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dnodeint_t *new_node, *last;
new_node = malloc(sizeof(dnodeint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev == NULL;
*head = new_node;
return (new_node);
}
last = *head;
while ((last->next != NULL))
last = last->next;
last->next = new_node;
new_node->prev = last;
return (new_node);
}
