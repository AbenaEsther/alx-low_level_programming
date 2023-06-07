#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and returns its data.
 *
 * @head: Pointer to the pointer of the list head.
 *
 * Return: Data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return 0;

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return data;
}

