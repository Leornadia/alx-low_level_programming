#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data
 *                of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
