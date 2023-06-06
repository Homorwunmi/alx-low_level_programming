#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: pointer to the first node of the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
