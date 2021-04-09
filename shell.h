#ifndef SHELL_H
#define SHELL_H

/* Libraries */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* Constants */
/*
* #define PATH_MAX 4096
* #define BUFSIZE 1024
*/

/*functions*/

/*main function*/
int main(void);

/*for exit the hash*/
/*int exit_hash(ssize_t endof, char *argv);*/

/* String Functions */
/*
*int _strcmp(char *s1, char *s2);
*int _putchar(char c);
*char *_strcat(char *dest, char *src);
*char *_strcpy(char *dest, char *src);
*/
int _strlen(char *s);
char *_strdup(char *str);

/*aux functions*/
/*
* void free_all(char *line, char **argv);
* char *_memcpy(char *dest, char *src, unsigned int n);
*/
char space_counter(char *line);
char **parser(char *input);

#endif
