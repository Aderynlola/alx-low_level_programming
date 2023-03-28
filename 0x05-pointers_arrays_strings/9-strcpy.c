#include "main.h"

/**
 * _strcpy - copies string
 * @dest: argument 1
 * @src: argument 2
 * Description: copy the string pointed to by pointer src to
 * the buffer pointed to by dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
