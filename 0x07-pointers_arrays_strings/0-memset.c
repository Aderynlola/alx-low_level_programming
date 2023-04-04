#include "main.h"

/**
 * _memset - entry point
 * @s: argument 1
 * @b: argument 2
 * @n: argument 3
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
