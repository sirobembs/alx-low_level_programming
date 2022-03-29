#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string. 
 * @c: character.
 *
 * Return: a pointer to the first occurance of the character
 * c in the string s.
 */
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
