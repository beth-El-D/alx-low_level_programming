#include "main.h"
#include <stdio.h>

/**
 * _islower - check for lower case characters
 * @c: the character to be checked
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (1);
}
