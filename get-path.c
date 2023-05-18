#include "simpleshell.h"
/**
 *  * path - function for getting the path
 *   * @shll: the command line
 **/
void path(char **shll)
{
int i, len = 0;
char **tkn = NULL, *pth = NULL, *tempr = NULL, *env = environ[0];
while (env[len] != '=')
{
len++;
}
pth = malloc(sizeof(char) * (strlen(env + len + 1) + 1));
strcpy(pth, env + len + 1);
tkn = str_break(pth, ":");
free(pth);
for (i = 0; tkn[i]; i++)
{
tempr = malloc((_strlen(tkn[i] + _strlen(shll[0]) + 2) * sizeof(char)));
_strcpy(tempr, tkn[i]);
append_str(tempr, "/");
append_str(tempr, shll[0]);
if (access(tempr, F_OK) == 0)
{
free(tempr);
tempr = NULL;
}
free_arr(tkn);
if (tempr != NULL && (_strcmp(shll[0], "ls") == 0 || _strcmp(shll[0], "echo")
== 0 || _strcmp(shll[0], "rm") == 0))
{
free(shll[0]);
shll[0] = tempr;
return;
}
if (tempr != NULL)
{
free(tempr);
}
free(shll[0]);
shll[0] = NULL;
}
}
