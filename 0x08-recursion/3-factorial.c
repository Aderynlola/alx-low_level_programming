#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: argument
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
