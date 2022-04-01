#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: length of strings in argv.
 * @argv: array of strings in comand line
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", mul);

	return (0);
}
