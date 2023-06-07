#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _realloc - Reallocates memory for the nodes in a linked list.
 * @l: The list to append.
 * @s: Size of the new list.
 * @n: New node to add.
 *
 * Return: Pointer to the new list.
 */
const listint_t **_realloc(const listint_t **l, size_t s, const listint_t *n)
{
	const listint_t **list;
	size_t i;

	list = malloc(s * sizeof(listint_t *));
	if (list == NULL)
	{
		free(l);
		exit(98);
	}

	for (i = 0; i < s - 1; i++)
		list[i] = l[i];

	list[i] = n;
	free(l);

	return (list);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the linked list's struct.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a, len = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (a = 0; a < len; a++)
		{
			if (head == l[a])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (len);
			}
		}

		len++;
		l = _realloc(l, len, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(l);
	return (len);
}

