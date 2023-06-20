#include "main.h"

/**
 * main - checks for alphabetic charavcter
 * @c: The character to be checked
 * Return: 1 for alphabetic character 0 for the rest
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c <= 122))
	{
		return (1);
	}
	return (0);
}
