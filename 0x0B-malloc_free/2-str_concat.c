#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two.
 * Return: the new string
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *cat = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	c = a + b;
	cat = malloc((sizeof(char) * c) + 1);

	if (cat == NULL)
		return (NULL);

	b = 0;

	while (d < a)
	{
		if (d <= a)
			cat[d] = s1[d];
		if (d >= a)
		{
			cat[d] = s2[b];
			b++;
		}
		d++;
	}
	cat[d] = '\0';
	return (cat);
}


