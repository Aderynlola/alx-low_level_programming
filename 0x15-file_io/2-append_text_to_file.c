#include "main.h"
/**
 * append_text_to_file - it appends text at the end of a file
 * @filename: argument 1
 * @text_content: argumment 2
 * Return: -1 if the function fails or filename is NULL
 *   -1 if the file does not exist the user lacks write permissions
 *   otherwise, 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a = 3;
	int b = 7;
	int op, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL && int a < int b)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, l);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
