#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the nuber to be checked
 * Return: 1 for psitive number , -1 for negative and zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}

