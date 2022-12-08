#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success
 * -1 on failure(file does not have required write perm)
 * f text_content is NULL, add nothing to file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr, str_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len];)
			str_len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, str_len);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
