#include "shell.h"

/**
 * _strlen - length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
int str = 0;

while (s[str] != '\0')
{
str++;
}
return (str);
}


/**
 * main - Entry point
 * @argc: abc
 * @argv: def
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, len;
    char c = '\n';

	for (i = 0; i < argc; i++)
    {
        len = _strlen(argv[i]);
        write(STDOUT_FILENO, argv[i], len);
        write(STDOUT_FILENO, &c, 1);
    }
	return (0);
}
