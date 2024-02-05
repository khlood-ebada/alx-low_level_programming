#include "lists.h"

/**
 * add_nodeint - add a node to the top
 * @head: pointer to first node
 * @n: value for new node
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (-1);

	new_node->next = NULL
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}