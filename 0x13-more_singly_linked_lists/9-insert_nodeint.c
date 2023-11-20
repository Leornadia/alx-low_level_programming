#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i = 0;
if (idx > 0 && *head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
temp = *head;
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL || i < idx - 1)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
