#include "main.h"

/**
 *  * *_strcat - function commute srtings
 *   * @dest: param pointer to a char
 *    * @src: param pointer to a char
 *     * Return: return value of dest
 *      */

char *_strcat(char *dest, char *src)
{
	int g;
	int k;

	g = 0;
	k = 0;

	while (dest[g] != '\0')
	{
		g++;
	}
	while (src[k] != '\0')
	{
		dest[g] = src[k];
		k++;
		g++;
	}

	dest[g] = '\0';
	return (dest);
}
