#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and added as the new node's str field.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	/* creating a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		/* returns NULL if memory allocation fails */
		return (NULL);
	}

	/* duplicates the input string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		/* freeing memory and return NULL if string duplication fails */
		free(new_node);
		return (NULL);
	}

	/* sets the length of the string */
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, set new_node as the head */
		*head = new_node;
	}
	else
	{
		/* traverse list to find the last node */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		/* settingthe next pointer of the last node to the new node */
		temp->next = new_node;
	}

	return (new_node);
}

