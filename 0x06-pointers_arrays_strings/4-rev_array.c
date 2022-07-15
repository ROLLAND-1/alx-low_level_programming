#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @c: array.
 * @m: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *c, int m)
{
	int x, g, temp;

	for (x = 0; x < m - 1; x++)
	{
		for (g = x + 1; g > 0; g--)
		{	
			temp = *(c + g);
			*(c + g) = *(c + (g - 1));
			*(c + (g - 1)) = temp;
		}
	}
}
