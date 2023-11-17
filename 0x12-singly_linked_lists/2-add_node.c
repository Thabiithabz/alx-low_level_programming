#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds new node at the start of alist
* @head: the original linked list
* @str: the string to add to node
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int length = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	
	(str[length]);
		length++;

	add->len = length;
add->str = strdup(str);
add->next = *head;
	*head = add;
	return (add);
}
