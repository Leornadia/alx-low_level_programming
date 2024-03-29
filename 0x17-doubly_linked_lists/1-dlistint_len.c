#include "lists.h"
/**
 * dlistint_len - Returns the number of elements
 *                in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t nodes = 0;
while (current != NULL)
{
nodes++;
current = current->next;
}
return (nodes);
}
