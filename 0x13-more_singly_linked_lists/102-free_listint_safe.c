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
	int line;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		line = *h - (*h)->next;
		if (line > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
