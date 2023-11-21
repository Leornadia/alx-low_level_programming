#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list that may contain a loop
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp, *slow, *fast;
if (h == NULL || *h == NULL)
return (0);
slow = *h;
fast = (*h)->next;
while (slow != NULL)
{
temp = slow;
slow = slow->next;
count++;
free(temp);
if (slow == fast)
{
*h = NULL;
return (count);
}
if (fast != NULL && fast->next != NULL)
fast = fast->next->next;
else
fast = NULL;
}
*h = NULL;
return (count);
}
