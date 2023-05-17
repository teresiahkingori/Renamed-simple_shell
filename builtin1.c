#include "simpleshell.h"
/**
 *inbuilt - checks for built in commands
 *@shll: cmd line
 *@ls: variable for line of string
 */
void inbuilt(char **shll, char *ls)
{
if (strncmp(shll[0], "exit") == 0)
{
free(ls);
if (shll[1])
{
int exit_status = my_av(shll[1]);
free_arr(shll);
exit(exit_status);
}
free_arr(shll);
exit(0);
}
}

