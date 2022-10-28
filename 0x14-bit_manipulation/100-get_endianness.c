#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if endian, -1 if not.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
