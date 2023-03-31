#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: argument 1
 * @src: argument 2
 * @n: argument 3
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0 ; src[i] && i < n ;i++)
		dest[dest_len++] = src[i];
	return (dest);
}
