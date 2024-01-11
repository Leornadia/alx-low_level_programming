#include "lists.h"
/**
  * delete_dnodeint_at_index - Deletes the node at the
  *                           given index.
  * @head: A pointer to the head of the dlistint_t list.
  * @index: The index of the node to delete - indices start at 0.
  *
  * Return: 1 on success, -1 on failure.
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp, *next;
unsigned int i;
if (*head == NULL || head == NULL)
return (-1);
tmp = *head;
if (index == 0)
{
*head = tmp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(tmp);
return (1);
}
for (i = 0; tmp != NULL && i < index; i++)
tmp = tmp->next;
if (tmp == NULL || tmp->next == NULL)
return (-1);
next = tmp->next;
tmp->next = next->next;
if (tmp->next != NULL)
tmp->next->prev = tmp;
free(next);
return (1);
}
