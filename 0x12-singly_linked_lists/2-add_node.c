#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and added as the new node's str field.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}

	/* Duplicate the input string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		/* Free memory and return NULL if string duplication fails */
		free(new_node);
		return (NULL);
	}

	/* Set the length of the string */
	new_node->len = strlen(str);

	/* Set next pointer of new_node to the current head */
	new_node->next = *head;

	/* Head now points to the new node */
	*head = new_node;

	return (new_node);
}

