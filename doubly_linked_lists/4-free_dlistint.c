#include "lists.h"

/**
 * free_dlistint - This function frees a dlistint_t list
 * @head: Pointer to head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
	}

	free(head);
}
