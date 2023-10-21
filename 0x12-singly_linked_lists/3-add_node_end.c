#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
unsigned int y;
for (y = 0; str[y]; y++)
;
return (i);
}
/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n, *mp;
if (str == NULL)
return (NULL);
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
n->str = strdup(str);
if (n->str == NULL)
{
free(n);
return (NULL);
}
n->len = _strlen(new->str);
n->next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
mp = *head;
while (mp->next)
mp = mp->next;
mp->next = n;
return (n);
}
