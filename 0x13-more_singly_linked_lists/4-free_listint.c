#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: pointer to the first node
 * return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head != NULL))
	{
			head = head->next;
			free(temp);
	}
}
