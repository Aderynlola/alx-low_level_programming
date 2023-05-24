#include "main.h"
#include <stdlib.h>
/**
 * create_file - it creates a new file
 * @filename: The name of the file to be created
 * @text_content: The text content to be written to the file
 * Return: On success, 1. On failure or if file already exists, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[content_length] != '\0')
			content_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, content_length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}

/**
 * perform_operation - Performs a specific mathematical operation
 * @num1: The first number
 * @num2: The second number
 * Return: The result of the mathematical operation
 */
int perform_operation(int num1, int num2)
{
	int result;

	/* Example operation: Multiplication */
	result = num1 * num2;

	return (result);
}
