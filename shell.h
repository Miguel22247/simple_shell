#ifndef SHELL_H
#define SHELL_H

/* Libraries */
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Constants
#define PATH_MAX 4096
#define BUFSIZE 1024
 */
/*functions*/

/*main function*/
int shell(void);

/*for exit the hash*/
/*int exit_hash(ssize_t endof, char *argv);*/

/*String Functions*/
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

/*aux functions
char space_counter(char *line);*/
int prompt(void);

#endif
