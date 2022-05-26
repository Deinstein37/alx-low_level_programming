#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the memory location of the head pointer
 *@idx: index where the new node should be added
 *@n: the value of the new node
 *
 *Return: address of the new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int nodes = 0;
	unsigned int counter = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	tmp = *head;

	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
	}

	if (nodes < idx)
	{
		free(new);
		return (NULL);
	}
	tmp = *head;
	if (counter == idx)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (counter < idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
