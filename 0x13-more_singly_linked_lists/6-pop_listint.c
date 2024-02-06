#include "lists.h"

/**
 * pop_listint - delete the first node
 * @head: pointer to the first node
 * Return: value of poped node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	node = head->next;
	n = head->n;
	free(head);
	*head = node;
	return (n);
}
