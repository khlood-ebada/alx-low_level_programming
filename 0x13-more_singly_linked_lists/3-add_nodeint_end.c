#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end
 * @head: pointer to the first node
 * @n: data for the new node
 * Return: pointer to a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	listint_t *node;

	if (!head || !new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node; else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
