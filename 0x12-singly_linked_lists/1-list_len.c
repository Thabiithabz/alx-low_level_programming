#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - show number of elements of list
 * @h: linked list
 * return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
h = h->next;
		
	}
	return (count);
}
