#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the pointer to the head of the list
 *
 * Description: Frees all the nodes and nullifies the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL)
	{
		return;
	}

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = (NULL);
}
