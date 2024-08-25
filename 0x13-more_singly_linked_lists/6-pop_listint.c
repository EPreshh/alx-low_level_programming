#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: pointer to the pointer to the head of the list
 *
 * Return: head node's data, or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int head_data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	old_head = *head;

	head_data = old_head->n;

	*head = old_head->next;

	free(old_head);

	return (head_data);
}
