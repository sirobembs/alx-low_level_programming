#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Program that prints all arguments it's receieve.
 * @argc: size of argv in integr.
 * @argv: array of comand line iputs.
 * Return: always 0 (success).
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
