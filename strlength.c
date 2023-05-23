#include "simpleshell.h"
/**
 *  * str_length - prints the length of a given string
 *   * @str: string to be printed
 *    *
 *     * Return: returns the number of chars in the string
 **/
ssize_t len_str(char *str)
{
ssize_t len = len_str(str);
return (write(STDOUT_FILENO, str, len));
}
