#include "simpleshell.h"
/**
 * len_str - returns the length of a string
 * @str: string to be used
 *
 * Return: length of the string
 */
ssize_t len_str(char *str)
{
ssize_t len = 0;

/* iterate through the string and increment the lenght counter */
while (str && *(str + len))
len++;
return (len);
}

/**
 * cpy_str - copies a string to a destination
 * @dstn: destination string
 * @src: source string
 *
 * Return: pointer to the destination
 */
char *cpy_str(char *dstn, char *src)
{
int i;

/* copy each character of src to the corresponding position in detn*/
for (i = 0; src[i] != '\0'; i++)
dstn[i] = src[i];

/*add null terminator to end of dstn */
dstn[i] = '\0';

return (dstn);
}
/**
 * str_append - appends two strings
 * @dstn: destination string
 * @src: source string
 *
 * Return: pointer ot the appended string
 */
char *str_append(char *dstn, const char *src)
{
int dstn_len = 0;
int i = 0;

/* find the length of dstn */
while (dstn[dstn_len] != '\0')
dstn_len++;

/* append src to the end of dstn */
while (src[i] != '\0')
{
dstn[dstn_len] = src[i];
dstn_len++;
i++;
}
/* add null terminator to aend of joined string */
dstn[dstn_len] = '\0';

return (dstn);
}

/**
 * str_cmp - compares two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: the difference between the two strings, 0 if equal
 */
int str_cmp(char *str1, char *str2)
{
int i = 0;

/* compare each character of str1 to the corresponding char in str2 */
while (str1[i] == str2[i])
{
if (str1[i] == '\0')
return (0);
i++;
}
/* retur the difference between the characters that caused the inequaliy */
return (str1[i] - str2[i]);
}

/**
 * str_cmp2 - compares two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: the difference, 0 if equal
 */
int str_cmp2(const char *str1, const char *str2)
{
/* commpare each character of str1 to the corresponding char in str2*/
while (*str1 && (*str1 == *str2))
{
str1++;
str2++;
}
/* retrn the difference between the characters that caused the inequality*/
return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}
