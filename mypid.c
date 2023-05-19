#include <stdio.h>
#include <unistd.h>
/**
 ** prc_id - process identifier
 ** Return: NULL
 **/
int main(void)
{
pid_t my_pid;
my_pid = getpid();
printf("%u\n", my_pid);
return (0);
}
