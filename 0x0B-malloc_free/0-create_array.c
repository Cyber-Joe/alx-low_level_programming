#include "main.h"
#include <stdlib.h>

/**
 * create_array - creetes an array of characters
 * @size: size of the array
 * @c: stores the character
 * Return: The pointer to the array
 */
char *create_array(unsigned int size, char c);
{
	char *arr;
	unsigned int i;

		if (size == 0)
		return (0);

		arr = malloc(sizeof(c) * size);

		if (arr == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			arr[i] = c;

		return (arr);
}
