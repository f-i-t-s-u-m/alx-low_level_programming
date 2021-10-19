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
	int fd, owr, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[len])
		len++;
	owr = write(fd, len > 0 ? text_content : "", 0);
	if (owr == -1)
		return (-1);
	close(fd);
	return (1);
}
