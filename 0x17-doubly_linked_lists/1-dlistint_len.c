#include "lists.h"

/**
 * dlistint_len.c - count elements of the list
 * @h: pointer to the first node
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
