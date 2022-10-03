#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all argument it recieves
 * @argc: Total no. of command line arguments
 * @argv: Array that contains the program's command line arguments
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
