#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds new node to a list
 * @n: new node
 * @head: list head pointer
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
       
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL) {
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
