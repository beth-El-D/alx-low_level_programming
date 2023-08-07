#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 **_strdup - copies a string to a pointer
 * @str: pointer to a string
 * Return: a char pointer, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	int i = 1, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	cpy = malloc((sizeof(char) * i) + 1);

	if (cpy == NULL)
		return (NULL);

	while (j < i)
	{
		cpy[j] = str[j];
	}
	cpy[j] = '\0';
	return (cpy);
}
