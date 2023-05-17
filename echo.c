#include "simpleshell.h"

/**
 * echo_func - function that loops the value input by user.
 * @insrt: return value either 0 or 1
 */

void echo_func(int insrt)
{
char *line = NULL, **args = NULL;
size_t size = 0;
int num_chars;
struct stat st;
while (1)
{
if (insrt)
write(STDOUT_FILENO, "$ ", 2);
num_chars = getline(&line, &size, stdin);
if (num_chars == EOF)
{
free(line);
exit(0);
}
if (_strcmp2(line, "\n") == 0)
continue;
args = str_break(line, " \t\r\n");
_condns(args, line);
if (_strcmp2(args[0], "env") == 0)
{
prt_enve();
free_arr(args);
continue;
}
if (stat(args[0], &st) != 0)
get_path(args);
if (args[0] == NULL)
{
write(STDERR_FILENO, "Command not found\n", 18);
free(line);
line = NULL;
free_arr(args);
args = NULL;
continue;
}
exec_cmd(args);
free_arr(args);
}
free(line);
}