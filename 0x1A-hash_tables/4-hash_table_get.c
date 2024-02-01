#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: Key to look for
 *
 * Return: Value associated with element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;
if (!ht || !key || strlen(key) == 0)
return (NULL);
index = hash_djb2((unsigned char *)key) % ht->size;
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
