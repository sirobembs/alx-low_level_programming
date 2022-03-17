#include <main.h>
/**
 * print_number - function that prints the numbers, from 0 to 9
 *
 * return: always 0 (success)
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
