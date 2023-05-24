#include "main.h"
/**
 * append_text_to_file - it appends text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text to be appended to the file.
 * Return: On success, returns 1. On failure or if the file does not exist or
 *         the user lacks write permissions, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, bytes_written, content_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[content_length] != '\0')
            content_length++;
    }

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
 * perform_calculation - Performs a mathematical calculation on two numbers.
 * @num1: The first number.
 * @num2: The second number.
 * Return: The result of the calculation.
 */
int perform_calculation(int num1, int num2)
{
    /* Example calculation: Addition */
    int result = num1 + num2;

    return result;
}
