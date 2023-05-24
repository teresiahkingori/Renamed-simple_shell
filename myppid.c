#include <stdio.h>
#include <unistd.h>
#include "simpleshell.h"

/**
 * my_ppid- Entry point
 * Description: this is the my ppid
 * Return: Always 0 (Success)
 */

int my_ppid(void)
{
pid_t ppid;
ppid = getppid();
printf("%u\n", ppid);
return (0);
}
