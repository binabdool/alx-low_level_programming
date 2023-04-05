include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (node)
	{
		listint_t *next = node->next;

		free(node);
		node = next;
	}
}
