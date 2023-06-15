#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds new node to tail of a list
 * @n: new node
 * @head: list head pointer
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *position;
	dlistint_t *lastNode;

	position = malloc(sizeof(dlistint_t));

	if (position == NULL)
	{
		return (NULL);
	}

	position->n = n;

	if (*head)
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		position->next = NULL;
		position->prev = lastNode;;
		lastNode->next = position;

		return (position);
	}

	position->next = *head;
	position->prev = NULL;
	*head = position;

	return (*head);
}
