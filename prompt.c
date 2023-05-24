#include <stdio.h>
#include <stdlib.h>
#include "simpleshell.h"
/**
 * prmpt - prompt function for user input
 * getline = reads the string of a text
 * Return: always 0
 */
int prmpt(void)
{
char *buffer = malloc(1024);
size_t len = 1024;
while (1)
{
printf("$ ");
getline(&buffer, &len, stdin);
printf("%s", buffer);
}
return (0);
}
