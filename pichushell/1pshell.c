#include "header.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
  * Return: void;
 */
int main(int argc, char *argv[])
{
	ssize_t read;
	char *buffer;
	size_t length;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			write(1, "(mpcshell) ", 10);
		}
		read = getline(&buffer, &length, stdin);
		if (read == -1)
		{
			if (isatty(STDIN_FILENO) == 1)
					write(1, "\n", 1);
			break;
		}
		
		if (buffer[read - 1] == '\n')
				buffer[read - 1] = '\0';
		if (*buffer == '\0')
				continue;
		if (commandread(buffer, read) == 2)
				break;
	}
	free(buffer);
	buffer = NULL;
	return (0);
}
