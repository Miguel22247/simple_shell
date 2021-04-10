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
		if (isatty(STDIN_FILENO))
		{
			write(1, "(mcpshell)", 10);
		}
		read = getline(&buffer, &length, stdin);
		if (read == -1)
		{
			free(buffer);
			exit(0);
			perror("command not found");
		}
		if (read == EOF)
		{
			free(buffer);
			exit(0);
			perror("command not found");
		}
		if (read == 0)
		{
			free(buffer);
			exit(0);
		}
		return (0);
	}
}