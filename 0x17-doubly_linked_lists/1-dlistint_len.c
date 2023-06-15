#include "lists.h"

/**
 * dlistint_len - prints number of nodes in a list
 * @h: head pointer in the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}

	return (count);
}
