#include "simpleshell.h"
/*
 * @env_main - this function prints the environment
 */
void env_main(void)
{
char **env = environ;
for (size_t i = 0; env[i] != NULL; ++i)
{
_puts(env[i]);
_puts("\n");
}
}
