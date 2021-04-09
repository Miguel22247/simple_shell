#include "shell.h"

/**
 * main - Entry point
 * description: main function of shell
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *line;
	size_t len;
	ssize_t read;

	while (1)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "(mcpshell)", 10);
			read = getline(&line, &len, stdin);

			if (read == -1) /* EOF */
			{
				if (isatty(STDIN_FILENO) == -1)
						write(1, "\n", 1);
				break;
				
			}
			if (line[read - 1] == '\n')
					line[read - 1] = '\0';
			if (*line == '\0')
				continue;
	}
	free(line);
	line = NULL;
	return (0);
}
