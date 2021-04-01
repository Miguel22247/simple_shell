#include "shell.h"
/**
* shell - makes interact as a shell
* @variable: is a variable
*/

int shell() {
    char str[99], current_path[PATH_MAX];

    getcwd(current_path, sizeof(current_path));
    _putchar('PROMPT');

}
