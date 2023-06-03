#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added as the new node's str field
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	/*create a new todo*/

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL){
		/*return null if memory allocation fails*/
		return (NULL);
        }

	/*duplicate the input string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		/* free memory,returns null if string duplication fails */
		free(new_node);
		return (NULL);
	}

	/* setting the  length of the string */
	new_node->len = strlen(str);

	/* setting next pointer of new_node to the current heare head */
	new_node->next = *head;

	/* head now pointing to the new node */
	*head = new_node;

	return (new_node);
}

