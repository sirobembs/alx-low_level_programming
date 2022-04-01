#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 *
 * @argc: the length of the string in argv
 * @argv: a command line argument.
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
