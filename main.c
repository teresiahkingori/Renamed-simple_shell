#include "simpleshell.h"
/**
*arr_free - frees a char array and sets all elements to NULL
*@arr: array that will be freed
*/
void arr_free(char **arr)
{
int i;
for (i = 0; arr[i] != NULL; i++)
{
free(arr[i]);
arr[i] = NULL;
}
free(arr);
arr = NULL;
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
*/
int main(void)
{
signal(SIGINT, sgt_Handler);
echo(isatty(STDIN_FILENO));
return (0);
}
