#include "main.h"
#include <stdio.h>


/**
*_putchar - writes the character c to stdout
*@c: The character to print
*
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}


/**
*_islower checks for lower case
*@c: the character to check
*Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)

{

	return (c >= 'a' && c <= 'z');

}


/**
*_isalpha checks alpha 
*@c: the character to be checked
*Return: 1 if c is a letter, 0 otherwise
*/


int _isalpha(int c)

{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}


/**
*_abs - computes the absolute value of an integer
*@n: the int to check
*Return: the absolute value of int
*/


int _abs(int n)

{

	if (n >= 0)

	{

		return (n);

	}

	return (-n);

}



/**
*_isupper - checks for uppercase character
*@c: the character to be checked
*/

int _isupper(int c)

{

	return (c >= 'A' && c <= 'Z');

}

