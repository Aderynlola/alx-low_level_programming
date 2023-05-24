#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads and outputs the contents of a file
 * @filename: The name of the file to be read
 * @letters: The number of letters to read from the file
 * Return: The number of bytes written to STDOUT or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t wr;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (wr);
}

/**
 * perform_calculation - Performs a mathematical calculation
 * @operand1: The first operand
 * @operand2: The second operand
 * Return: The result of the calculation
 */
int perform_calculation(int operand1, int operand2)
{
	int result;

	/* Example calculation: Addition */
	result = operand1 + operand2;

	return (result);
}
