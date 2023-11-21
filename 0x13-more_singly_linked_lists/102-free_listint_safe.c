#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current;
if (!head)
return (0);
current = head;
while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
if (current <= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
break;
}
current = current->next;
count++;
}
return (count);
}
/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *tmp;
if (!h || !*h)
return (0);
current = *h;
while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
tmp = current;
current = current->next;
free(tmp);
count++;
if (tmp <= current)
break;
}
*h = NULL;
return (count);
}
