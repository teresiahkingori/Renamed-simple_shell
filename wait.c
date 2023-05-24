#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "simpleshell.h"
/**
 * wait_in: Entry point
 *
 * return: 0.
 */
int wait_in(void)
{
pid_t baby_pid;
int status;
baby_pid = fork();
if (baby_pid == -1)
{
perror("ERROR:");
return (1);
}
if (baby_pid == 0)
{
printf("please wait\n");
sleep(3);
}
else
{
wait(&status);
printf("Its ok now\n");
}
return (0);
}
