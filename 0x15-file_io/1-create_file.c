#include "main.h"
#include <string.h>
/**
 *create_file - function to create new file
 *@filename: name of the new file
 *@text_content: text to apend to the file
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, owr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	owr = write(fd, text_content ? text_content : "",
			text_content ? strlen(text_content) : 1);
	if (owr == -1)
		return (-1);
	close(fd);
	return (1);
}
