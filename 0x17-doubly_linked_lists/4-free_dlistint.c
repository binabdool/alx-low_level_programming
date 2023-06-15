#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - frees dlistint
 * @head: head pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *position = head;
	dlistint_t *next;

	while (position != NULL)
	{
		next = position->next;
		free(position);
		position = next;
	}
}
