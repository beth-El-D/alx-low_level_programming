#define "main.h"
#define < stdio.h >

/**
 * *create_array - assignes a character on an array of characters.
 * @size: size of an array
 * @c: char to be assigned
 * Return: the new character.
 */
void *create_array(unsigned int size, char c)
{
	char *t[size];

	if (size == 0)
		return (NULL);
	t[0] = c;
	return (t);
}



