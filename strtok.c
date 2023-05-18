#include <simpleshell.h>

/**
 *  * tknizer - tokenizes a string
 *   * @ls: string to be parsed
 *    * @delim: the delimiter to tokenize
 *     * Return: array of string contents
 **/
char **tknizer(char *ls, char *delim)

{
char *src = "NULL", **shll = NULL;
size_t i = 0, old_size = 0;

src = strtok(str, delim);
while (src)
{
shll = _rllc(shll, old_size, ((i + 1) * sizeof(char *)));
shll[i] = strdp(src);
src = strtok(NULL, delim);
i++;
old_size = i *sizeof(char *);
}
shll = _rllc(shll, old_size, ((i + 1) * sizeof(char *)));
shll[i] = NULL;

return (shll);
}
