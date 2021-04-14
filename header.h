#ifndef HEADER_H
#define HEADER_H

/* Libraries */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


/* external variables */
extern char environ;
/* Constants */
#define BUFSIZE 1024

/* Functions */
int main(void);

/* Aux functions */
void _puts(char *str);
int _putchar(char c);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
void free_tokens(char **tokens);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void env(int argc, char *argv[], char * envp[]);

#endif
