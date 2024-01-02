#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to tghe POSIX standard output
 * @filename: the file name
 * @letters: the number of letters
 * Return: the actual number of letters or 0 if fails
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fdisc;

ssize_t _read, _write;

char *buffer;

if (!filename)
{
	return(0);
}
/*opening the file*/
fdisc = open(filename, O_RDONLY);
if (fdisc == -1)
	return(0);

/*buffer*/
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
	return(0);

/*read*/
_read = read(fdisc, buffer, letters);
if(_read == -1)
{
free(buffer);
close(fdisc);
return(0);
}
/*write*/
_write = write(STDOUT_FILENO, buffer, _read);
if(_write == -1)
{
free(buffer);
close(fdisc);
return(0);
}
close(fdisc);
return(_read);
}
