#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int perform_calculation(int operand1, int operand2);
int perform_operation(int num1, int num2);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif