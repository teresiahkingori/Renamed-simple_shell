#include <stdio.h>
#include <stdlib.h>
#include "simpleshell.h"
/*
 *getline - function that accepts name input and displays the
 *buffer size
 */

int getline(void)
{
size_t n = 10;
char *buf = malloc(sizeof(char) * n);
printf("Enter name here:");
getline(&buf, &n, stdin);
printf("Name: %sBuffer size: %ld\n", buf, n);
free(buf);
return (0);
}
