#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node from doubly linked list
 * @head: header of the list
 * @index: where to find the list
 *
 * Return: specific node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *position = head;
	unsigned int times = 0;

	if (head)
	{
		while (position != NULL)
		{
			if (times == index)
				return (position);

			position = position->next;
			++times;
		}
	}

	return (NULL);
}
