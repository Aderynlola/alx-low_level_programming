#include "main.h"

/**
 * _strpbrk - entry point
 * @s: argument 1
 * @accept: argument 2
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0 ; accept[k] ; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
