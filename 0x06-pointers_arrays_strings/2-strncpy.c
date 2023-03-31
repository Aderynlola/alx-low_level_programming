#include "main.h"

/**
 * _strncpy - copies inputed number
 * of bytes from string src into dest
 * @dest: argument 1
 * @src: argument 2
 * @n: argument 3
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0 ; src[i] && i < n ; i++)
		dest[i] = src[i];

	for (i = src_len ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
