#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(void);
void close_file_descriptor(int fd);

/**
 * create_buffer - Allocates 1024 bytes of memory for a buffer.
 * Return: A pointer to the newly allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to allocate memory for the buffer\n");
		exit(99);
	}

	return (buffer);
}

/**
 * close_file_descriptor - Closes the file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - The entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success.
 *
 * Description: Exit codes:
 * - 97: Incorrect argument count.
 * - 98: Unable to read from file_from.
 * - 99: Unable to create or write to file_to.
 * - 100: Unable to close file_to or file_from.
 */
int main(int argc, char *argv[])
{
	int source_file, destination_file, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer();
	source_file = open(argv[1], O_RDONLY);
	read_bytes = read(source_file, buffer, 1024);
	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_file == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_bytes = write(destination_file, buffer, read_bytes);
		if (destination_file == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_bytes = read(source_file, buffer, 1024);
		destination_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(buffer);
	close_file_descriptor(source_file);
	close_file_descriptor(destination_file);

	return (0);
}
