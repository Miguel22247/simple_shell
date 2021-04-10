#include "shell.h"

char *name;
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

(void) argc;
name = argv[0];

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
			if (commandread(line, read) == 2)
				break;
			
	}
	free(line);
	line = NULL;
	return (0);
}

int commandread (char *line, size_t __attribute__((unused))read)
{
	char *tkn;
	char *commandarray[100];
	int n;

	if(_strcmp(line, "exit") == 0)
		return (2);
	if (_strcmp(line, "env")== 0)
		return (_printenv());
	tkn = strtok(line, " "), n = 0;
}

void not_found(char *command)
{
	write(2, name, _strlen(name));
	write(2,": 1:", 5);
	write(2, command, _strlen(command));
	write(2, ": not found\n", 12);
}