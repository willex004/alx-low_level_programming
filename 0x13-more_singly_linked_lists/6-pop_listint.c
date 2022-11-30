#include "lists.h"

/**
 * pop_listint - delete head node of listint_t
 * @head: address of head node
 * Return: data of head node, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
