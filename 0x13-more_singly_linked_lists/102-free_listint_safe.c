#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *next;
if (!h || !*h)
return (0);
current = *h;
while (current)
{
size++;
next = current->next;
free(current);
current = NULL;
if (next)
{
current = next;
if (current == *h)
break;
}
}
*h = NULL;
return (size);
}
