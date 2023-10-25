#include "lists.h"
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *n;
listint_t *t;
if (head == NULL)
return (NULL);
n = malloc(sizeof(listint_t));
if (n == NULL)
return (NULL);
n->n = n;
n->next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
t = *head;
while (t->next != NULL)
{
t = t->next;
}
t->next = n;
return (n);
}
