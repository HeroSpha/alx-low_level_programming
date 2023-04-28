#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to the list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *list)
{
	size_t size = 0;

	while (list)
	{
		if (!list->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", list->len, list->string);
		list = list->next;
		size++;
	}

	return (size);
}
