#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new

	new_node = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
		new->n = n;
		new->next = NULL;
		if (!*head)
		}
			new->prev = NULL;
			*head = new;
			return (*head);
		}	
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		mp->next = new;
		tmp->prev = *head;
		return (new_node);
}
