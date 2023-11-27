#include "main.h"

#define MAXSIZE 1024

/**
 * __exit - Handles error messages and exits the program.
 * @error: The error code.
 * @str: Additional string parameter for error message.
 * @fd: File descriptor (for close error).
 *
 * Return: Always returns 0.
 */
int __exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
	int file_in, file_out;
	int read_stat, write_stat;
	int close_in, close_out;
	char buffer[MAXSIZE];

	/* Check for correct number of arguments */
	if (argc != 3)
		__exit(97, NULL, 0);

	/* Open the source file for reading */
	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		__exit(98, argv[1], 0);

	/* Open or create the destination file for writing */
	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
		__exit(99, argv[2], 0);

	/* Read from source file and write to destination file */
	while ((read_stat = read(file_in, buffer, MAXSIZE)) != 0)
	{
		if (read_stat == -1)
			__exit(98, argv[1], 0);

		write_stat = write(file_out, buffer, read_stat);
		if (write_stat == -1)
			__exit(99, argv[2], 0);
	}

	/* Close source file */
	close_in = close(file_in);
	if (close_in == -1)
		__exit(100, NULL, file_in);

	/* Close destination file */
	close_out = close(file_out);
	if (close_out == -1)
		__exit(100, NULL, file_out);
	return (0);
}
