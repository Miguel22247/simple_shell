#include "shell1.h"

/**
 * main - Entry point
 * description: main function of shell
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *line;
	/* char **argv; */
	size_t len;
	ssize_t read;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1,"(mcpshell)", 10);
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			if (isatty(STDIN_FILENO) == -1)
					write(1,"\n", 1);
			break;
			
		}
	}
}