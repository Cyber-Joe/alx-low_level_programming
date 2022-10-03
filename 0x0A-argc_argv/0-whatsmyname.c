#include <stdio.h>

/**
 * main - Writes a program that prints its name followed
 * by a new line
 * @argc: No of arguments added to program
 * @argv: Arguments added to program
 * Return: Always(0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
