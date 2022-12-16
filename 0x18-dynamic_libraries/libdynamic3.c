#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: buffer dest
 * @src: string
 * Return: value pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (index >= 0)
	{
		dest[index] = src[index];

		if (src[index] == '\0')
		{
			return (dest);
		}
		index++;
	}
	return (dest);
}
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/**
 * _puts - function prints a string
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
/**
 * _memset - function fills the first memory with a constant value
 * @s: buffer to be filled and returned
 * @b: constant value
 * @n: bytes of the memory
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
/**
 * _islower - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	return (0);
}
