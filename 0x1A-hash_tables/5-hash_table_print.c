#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
char *comma = "";
if (!ht)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
printf("%s'%s': '%s'", comma, node->key, node->value);
comma = ", ";
node = node->next;
}
}
printf("}\n");
}
