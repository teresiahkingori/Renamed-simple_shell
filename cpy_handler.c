#include "simpleshell.h"
/**
 * cpy_handler - function to handle the copy command
 * @sg_ind: signal init variable
 */
void cpy_handler(__attribute__((unused)) int sg_ind)
{
signal(SIGINT, cpy_handler);
ssize_t len = write(STDOUT_FILENO, "\n$", 3);
(void) len;
}
