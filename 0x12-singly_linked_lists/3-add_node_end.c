new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
	/* Returns NULL if memory allocation fails */
	return (NULL);
}

/* Duplicates the input string */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
	/* Frees memory and returns NULL if string duplication fails */
	free(new_node);
	return (NULL);
}

/* Setting the length of the string */
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
	/* If the list is empty, set new_node as the head */
	*head = new_node;
}
else
{
	/* Traverse the list to find the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Set the next pointer of the last node to the new node */
	temp->next = new_node;
}

return (new_node);

