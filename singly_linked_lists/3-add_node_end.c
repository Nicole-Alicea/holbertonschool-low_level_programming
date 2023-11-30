#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list_t list
 * @head: double pointer to head
 * @str: string that will be duplicated
 *
 * Return: The address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
