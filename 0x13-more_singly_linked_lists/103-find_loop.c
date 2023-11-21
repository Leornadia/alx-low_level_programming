#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("[%p] %d\n", (void *)h, h->n);
h = h->next;
count++;
}
return (count);
}
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (!head)
return (NULL);
slow = head;
fast = head;
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
