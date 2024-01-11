#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of
 *                         a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to find - starts at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int node;
dlistint_t *current;
current =  head;
for (node = 0; node < index; node++)
{
if (current == NULL)
return (NULL);
current = current->next;
}
return (current);
}
