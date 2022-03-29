#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	i = 0;

	while (i < 8)
	{
		m = 0;
		while (m < 8)
		{
			_putchar(a[i][m]);
			m++
		}
		_putchar('\n');
		i++;
	}
}
