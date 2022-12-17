#include "main.h"
#include <stdio.h>


/**
*_isdigit - checks for a digit (0 through 9)
*@c: int to be checked
*Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)

{

	return (c >= '0' && c <= '9');
}

/**
*_strlen - returns the length of a string
*@s: string to evaluate
*
*Return: the length of the string
*/

int _strlen(char *s)

{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
*_puts - prints a string to stdout
*@str: pointer to the string to print
*/

void _puts(char *str)

{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}

/**
**_strcpy - copies the string pointed to by src
**_strcpy - copies the string pointed to by src
*to the buffer pointed to by dest
*@dest: pointer to the buffer in which we copy the string
*@src: string to be copied
*
*Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}

/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *s)
{

int i = 1;
unsigned int num = 0;

do {

if (*s == '-')
i *= -1;

else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');

else if (num > 0)

break;

} while (*s++);

return (num *i);

}
