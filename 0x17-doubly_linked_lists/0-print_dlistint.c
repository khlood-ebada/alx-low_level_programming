#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 * @h: pointer pointing to the first node
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
