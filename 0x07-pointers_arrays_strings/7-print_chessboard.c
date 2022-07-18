#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int f, m = 0;

	for (f = 0; f < 64; f++)
	{
		if (f % 8 == 0 && f != 0)
		{
			m = f;
			_putchar('\n');
		}
		_putchar(a[f / 8][f - m]);
	}
	_putchar('\n');
}
