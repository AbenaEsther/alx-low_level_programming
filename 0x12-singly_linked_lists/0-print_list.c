#include "lists.h"
#include <stdio.h> 

/**
 * print_list - prints elements in linked list
 *
 * @h: pointer to the first node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Iterate through the linked list until the last node */
	while (h!= NULL)
	{
		/* If the string in the current node is NULL, print (nil) */
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		count += 1;
	}

	/* Print the last node */
	/* printf("[%d] %s\n", h->len, h->str);*/ 

	return (count);
}

