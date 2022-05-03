#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function to append a text
 * @filename: name of file
 * @text_content: NULL terminated string
 *
 * Return: 1 on Success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - function to determine string length
 * @s: String to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	return (c);
}

