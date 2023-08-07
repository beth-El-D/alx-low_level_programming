#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - assignes a character on an array of characters.
 * @size: size of an array
 * @c: char to be assigned
 * Return: the new character.
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
		return (NULL);

	k = malloc(sizeof(char) * size);

	if (k == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		k[i] = c;
	}
	return (k);
}
