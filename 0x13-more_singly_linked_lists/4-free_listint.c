#include "lists.h"

/**
 * free_listint - free a linked list listint_t
 * @head: pointer to address of first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listintt *tmp_store;

	while (head)
	{
		tmp_store = head->next;

		free(head);
		head = temp_store;
	}
}
