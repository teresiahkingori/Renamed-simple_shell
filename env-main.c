#include "simpleshell.h"
/**
 * env_main - this function prints the environment
 */
void env_main(void)
{
ssize_t i;
char **env = environ;
for (i = 0; env[i] != NULL; ++i)
{
puts(env[i]);
puts("\n");
}
}
