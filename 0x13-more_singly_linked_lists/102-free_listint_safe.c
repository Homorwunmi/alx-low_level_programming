#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node on the linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *loop_start = find_listint_loop(*h);

	if (!h || !*h)
		return (0);

	if (!loop_start)
	{
		while (*h)
		{
			listint_t *temp = (*h)->next;

			free(*h);
			*h = temp;
			len++;
		}
	}
	else
	{
		listint_t *node = *h;
		listint_t *temp;

		while (node != loop_start)
		{
			temp = node->next;
			free(node);
			node = temp;
			len++;
		}

		while (node)
		{
			temp = node->next;
			free(node);
			node = temp;
			len++
		}
	}

	*h = NULL;
	return (len);
}
