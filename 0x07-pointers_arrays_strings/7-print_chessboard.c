#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, m = 0;

	while (m < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[m][i]);
			i++
		}
		_putchar('\n');
		m++;
	}
}
