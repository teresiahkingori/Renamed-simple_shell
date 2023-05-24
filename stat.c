#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "simpleshell.h"
/*
 *  * stat1 - this is a stat example.
 *   * Gets the status call of a file
 *    * Return: 0
 **/
int stat1(int ac, char **av)
{
unsigned int i;
struct stat st;
if (ac < 4)
{
printf("FOR: %s file path\n", av[0]);
return (1);
}
i = 1;
while (av[i])
{
printf("%s:", av[i]);
if (stat(av[i], &st) == 0)
{
printf("File found\n");
}
else
{
printf("OOOPS! Not found\n");
}
i++;
}
return (0);
}

