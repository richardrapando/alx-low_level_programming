#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list
 * @head: pointer
 *
 * Description: The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
