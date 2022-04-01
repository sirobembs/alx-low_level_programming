#include <stdio.h>
#include "main.h"

/**
 * main - porgram that return the number of argv
 * passed into it.
 *
 * @argc:no of argv passed into program
 * @argv: array of strings
 *
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
