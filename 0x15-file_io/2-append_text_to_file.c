#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytesWritten, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	bytesWritten = write(file, text_content, i);
	if (bytesWritten == -1)
		return (-1);

	close(file);
	return (1);
}
