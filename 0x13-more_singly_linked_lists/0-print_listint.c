#include "lists.h"

/**
 * print_listint - Prints int list-
 * @h: pointer to main list
 * Return: Numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
