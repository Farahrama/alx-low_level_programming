#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 * Return: pointer of Index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int s;
if (head == NULL)
return (NULL);
for (s = 0; s < index; s++)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return (head);
}
