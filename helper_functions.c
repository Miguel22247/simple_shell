#include "shell.h"
/**
 * print_enviroment - prints the enviroment variable
 * 
 * 
 */
int print_enviroment(void)
{
	char *line = enviroment[0];
	int n = 0;

	while (line)
	{
		write(1, line, _strlen(line));
		write(1, '\n', 1);
		line = enviroment[++n];
	}
	return (0);
}