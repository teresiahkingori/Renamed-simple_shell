<<<<<<< HEAD
#include <simpleshell.h>
=======
#include "simpleshell.h"
>>>>>>> 34aab880eaa0db13ffff97ab3c2741af29686cf5
/**
 *my_av- this function will change a string into an integer
 *str: string to convert
 * Return: the integer value of a str
 */
int my_av(const char *str)
{
int result = 0, sign = 1;
size_t i = 0;
if (str[i] == '-')
{
sign = -1;
i++;
}
for (; str[i] != '\0'; ++i)
{
if (str[i] < '0' || str[i] > '9')
{
break;
}
result = result * 10 + (str[i] - '0');
}
return (sign *result);
}
