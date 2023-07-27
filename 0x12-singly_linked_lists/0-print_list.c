#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints  the elements of a  singly linked list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t new;
	size_t i = 0;

	new = *h;

	while (new.next != NULL)
	{
		printf("%s\n", new.str);
		new.next += 1;
		i++;
	}

	return (i);
}

