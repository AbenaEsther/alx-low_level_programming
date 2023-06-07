#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 *
 * @h: List to count the elements in.
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

