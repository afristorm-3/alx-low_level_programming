#include "main.h"
/**
 * _isalpha -main function
 *
 * @c : character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/**
 * _abs - main function
 *
 * @n: integer to make absolute
 * Return: int or int times negative
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
/**
 * _isupper - checks for uppercase character
 * @c: variable character
 * Return: 1 if c is uppercase - 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
* _isdigit - function that check if it's a digit
* @c: checks the digit
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _strlen - function returns the length of a string
 * @s: string
 * Return: integer legth of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
