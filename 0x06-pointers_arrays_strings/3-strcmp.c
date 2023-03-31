#include "main.h"

/**
 * _strcmp - compares pointers to strings
 * @s1: argument 1
 * @s2: argument 2
 * Return: if str1 < str2, the negative difference of the first unmatched chars
 * id str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
