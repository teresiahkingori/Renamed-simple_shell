#include <stdio.h>
#include <unistd.h>
#include "simpleshell.h"
/**
 ** prc_id - process identifier
 ** Return: NULL
 **/
int prc_id(void)
{
pid_t my_pid;
my_pid = getpid();
printf("%u\n", my_pid);
return (0);
}
