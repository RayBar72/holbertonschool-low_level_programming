#include "main.h"

/**
 * append_text_to_file - function that appends text at end
 * @filename: name of the file
 * @text_content: string to write in the file
 * Return: 1 success, -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, len, text;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		text = write(f, text_content, len);
		if (text != len)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
