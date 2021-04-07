#include "shell.h"

/**
 * exit_hash - Function tha handles different cases where the user want to exit
 * @endof: eof
 * @argv: command
 * Return: 0
 */
int exit_hash(ssize_t endof, char *argv)
{
	if (endof == EOF)
	{
		write(1, '\n', 2);
		return(0);
	}
}
/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
	char *line;
	size_t len;

	while (1)
	{
	write(1, "(mcpshell) ", 10);
	getline(&line, &len, stdin);
	}
}
