#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: string to write in the file
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, len, text;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f < 0)
		return (-1);
	if(text_content)
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
