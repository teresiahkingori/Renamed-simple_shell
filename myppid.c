#include <stdio.h>
#include <unistd.h>
#include "simpleshell.h"

int my_ppid(void)
{
pid_t ppid;
ppid = getppid();
printf("%u\n", ppid);
return (0);
}
