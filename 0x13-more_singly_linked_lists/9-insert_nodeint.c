#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list
 * @head: Pointer to the head of the list
 * @n: Value to be added in the new node
 * @idx: Index of the node where the new node should be inserted, starting at 0
 *
 * Return: The address of the new node if successful, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current;

	current = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	if (current == NULL && idx != 0)
		return NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return new_node;
}

