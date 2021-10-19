#include "main.h"
#include <stdio.h>
/**
 *read_textfile - function that read text file
 *@filename: file name to read
 *@letters: size of buffer
 *Return: integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, opw, opr;
	char *buff;

	if (filename == NULL)
		return(0);
	buff = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	opr = read(fd, buff, letters);
	if(opr == -1)
		return (0);
	opw = write(STDOUT_FILENO, buff, opr);
		if(opw == -1 || opw != opr)
			return (0);
	return(opw);
}
