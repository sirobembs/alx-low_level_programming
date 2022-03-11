#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	putchar("Lowercase characters : \n");
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar("%c ", ch);
	return 0;
}

