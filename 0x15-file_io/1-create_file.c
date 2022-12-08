#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * file should have the permissions rw---
 * Return: 1 on success
 * -1 on failure(file cannot be created, written, write fails)
 * if text_content is NULL, create an empty file
 * truncate file if already exists
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wr, str_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len];)
			str_len++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(opn, text_content, str_len);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
