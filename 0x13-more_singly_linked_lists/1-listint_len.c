#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head pointer
 * Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t y = 0;
while (h != NULL)
{
h = h->next;
y++;
}
return (y);
}
