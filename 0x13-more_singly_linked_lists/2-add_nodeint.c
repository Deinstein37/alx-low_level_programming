#include "lists.h"

/**
 * add_nodeint - Adds node ad the beggining of a list
 * @head: pointer to start of a list,
 * @n: value to add.
 * Return: Value of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
