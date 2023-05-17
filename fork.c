#include "simpleshell.h"

/**
 * _realloc -it reallocates memory block.
 * @ptr: pointer to previously allocated memory.
 * @old_size: size of the space allocated to ptr.
 * @new_size: size of the new memory block.
 * Return: pointer to the new allocated memory block.
 */

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
char *new_ptr, *old_ptr = ptr;
size_t i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];
free(ptr);
return (new_ptr);
}
/*
 * _strdup - function that the duplicates a string.
 * @str: string duplicated.
 * Return: pointer to the new allocated memory block.
 */
char *_strdup(char *str)
{
char *new_str;
size_t i, len;
if (str == NULL)
return (NULL);
len = 0;
while (str[len] != '\0')
len++;
new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
new_str[i] = str[i];
new_str[len] = '\0';
return (new_str);
}
