#include "lists.h"

/**
 * listint_len - Prints numbers of elements from a lists.
 * @h: pointer to main list
 * Return: Numbers of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
