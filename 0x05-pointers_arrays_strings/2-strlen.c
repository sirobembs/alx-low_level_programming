#include "main.h"

/**
 * int_strlen(char *s)
 * @s: input string.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
