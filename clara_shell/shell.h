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
#define BUFFSIZE 64 /*¡?¡?*/

/* Functions */
int shell_loop(void);

/* Aux functions */
void _puts(char *str);
int _putchar(char c)

#endif
