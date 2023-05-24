#include "simpleshell.h"

/*#include "main.c"
 **
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
pth = malloc(sizeof(char) * (len_str(env + len + 1) + 1));
cpy_str(pth, env + len + 1);
tkn = tknizer(pth, ":");
free(pth);
for (i = 0; tkn[i]; i++)
{
tempr = malloc((len_str(tkn[i] + len_str(shll[0]) + 2) * sizeof(char)));
cpy_str(tempr, tkn[i]);
str_append(tempr, "/");
str_append(tempr, shll[0]);
if (access(tempr, F_OK) == 0)
{
free(tempr);
tempr = NULL;
}
free_arr(tkn);
if (tempr != NULL && (str_cmp(shll[0], "ls") == 0 || str_cmp(shll[0], "echo")
== 0 || str_cmp(shll[0], "rm") == 0))
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
