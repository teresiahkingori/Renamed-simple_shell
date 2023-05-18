#include "simpleshell.h"
/**
 *  * str_length - prints the length of a given string
 *   * @str: string to be printed
 *    *
 *     * Return: returns the number of chars in the string
 **/
ssize_t str_length(char *str)
{
ssize_t len = strlen(str);
return write(STDOUT_FILENO, str, len);
}
