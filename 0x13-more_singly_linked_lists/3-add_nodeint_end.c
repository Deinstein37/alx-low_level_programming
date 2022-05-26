#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a list.
 * @head: pointer to start of a list,
 * @n: value to add.
 * Return: Value of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	end = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
	}
	if (end == NULL)
	{
		*head = new;
	}
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);

}
