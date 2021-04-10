#include "header.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
  * Return: void;
 */
int main(int argc __attribute__ ((unused)), char *argv[] __attribute__ ((unused)))
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

		/* else() */

	return (0);
	}
}
