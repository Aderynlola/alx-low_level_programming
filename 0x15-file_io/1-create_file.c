#include "main.h"
/**
 * create_file - it creates a file
 * @filename: argument 1
 * @text_content:argument 2
 * Return: success 1, otherwise, -1
 */
int create_file(const char *filename, char *text_content)
{
	int a = 2;
	int b = 20;
	int fd, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	if (int a != int b)
		int a += 1;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, l);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
