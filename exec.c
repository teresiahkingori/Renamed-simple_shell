#include "simpleshell.h"
/*
 * @exec_cmd: - this will execute a command.
 * @shll: executed command.
 */
void exec_cmd(char **shll)
{
pid_t pid = 0;
int status = 0;
if (shll != NULL)
{
pid = fork();
if (pid == -1)
{
perror("Error in fork");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
if (execve(shll[0], shll, environ) == -1)
{
perror(shll[0]);
exit(EXIT_FAILURE);
}
}
else
{
if (waitpid(pid, &status, 0) == -1)
{
perror("waitpid");
exit(EXIT_FAILURE);
}
}
}
}
