#include "shell.h"

/**
* main - makes interact as a shell
* @variable: is a variable
* Return: 0 if success
*/

int main(char argc, char **argv) {
   /* char *buffer; */
    char current_path[PATH_MAX];
    getcwd(current_path, sizeof(current_path));
    
    printf("$ \n");
    /* create buffer to store input
    buffer = malloc(BUFSIZE * sizeof(char)); */

    return (0);
}
