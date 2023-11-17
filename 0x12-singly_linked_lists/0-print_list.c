#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - print elements of list_t list
 * @h: name of list
 *
 * return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
		count++;
		h = h->next;
	}

	return (count);
}
