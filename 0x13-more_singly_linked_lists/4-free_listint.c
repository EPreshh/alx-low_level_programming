#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Description: Frees all the nodes in a linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;
	listint_t *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
