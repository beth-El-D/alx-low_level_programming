#include <stdio.h>

/**
 * main - prints all possible diffrent combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}