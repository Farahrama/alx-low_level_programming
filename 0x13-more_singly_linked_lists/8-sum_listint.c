#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 * Return: sum all the data
*/
int sum_listint(listint_t *head)
{
int sm = 0;
while (head != NULL)
{
sm += head->n;
head = head->next;
}
return (sm);
}
