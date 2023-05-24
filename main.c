#include "simpleshell.h"

/**
*free_arr - frees a char array and sets all elements to NULL
*@arr: array that will be freed
*/
void free_arr(char **arr)
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
signal(SIGINT, cpy_handler);
echo_func(isatty(STDIN_FILENO));
return (0);
}
