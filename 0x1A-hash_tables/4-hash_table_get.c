#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key:  is the key you are looking for
 * Returns: the value associated, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int  index;
hash_node_t *node;
if (ht == NULL || key == NULL)
return (NULL);
index = hash_djb2((unsigned char *) key) % ht->size;
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
