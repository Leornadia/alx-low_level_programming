#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the head of the list
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
