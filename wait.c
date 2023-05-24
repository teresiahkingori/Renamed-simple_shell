#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/*
 * main - function that prints the process identifier
 * wait_in - asks the user to wait for pid
 ** return: 0.
 **/
int main(void)
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
