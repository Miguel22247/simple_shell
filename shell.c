#include "shell.h"
/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
	char *line;
	size_t len;
	char *command;
	char str[6] = {"exit"};

	while (1)
	{
		write(1, "(mcpshell) ", 10);
		getline(&line, &len, stdin);
	
		if(command == str)
		{
			/* write(1, '\n', 1);
			return (0); */
			break;
		}
	}
	return (0);
}

