#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: the address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int y;
listint_t *temp, *new;
if (head == NULL)
return (NULL);
if (idx != 0)
{
temp = *head;
for (y = 0; y < idx - 1 && tp != NULL; y++)
{
temp = temp->next;
}
if (temp == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = temp->next;
temp->next = new;
return (nw);
}
