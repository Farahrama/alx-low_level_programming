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
listint_t *tp, *nw;
if (head == NULL)
return (NULL);
if (idx != 0)
{
tp = *head;
for (y = 0; y < idx - 1 && tp != NULL; y++)
{
tp = tp->next;
}
if (tp == NULL)
return (NULL);
}
nw = malloc(sizeof(listint_t));
if (nw == NULL)
return (NULL);
nw->n = n;
if (idx == 0)
{
nw->next = *head;
*head = nw;
return (nw);
}
nw->next = tp->next;
tp->next = nw;
return (nw);
}
