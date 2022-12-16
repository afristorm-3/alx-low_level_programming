#include "main.h"
#include <stddef.h>

/**
 * _memcpy - function that copies memory area
 * @dest: memory destiny where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: pointer dest copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; *(s + index); index++)
	{
		if (*(s + index) == c)
			return (s + index);
	}
	if (*(s + index) == c)
		return (s + index);
	return (0);
}
/**
 * _strspn - functions that gets the length of a prefix substring
 * @s: the string
 * @accept: contains bytes from accept
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
/**
 * _strpbrk - functions thar searches a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (NULL);
}
/**
 * _strstr - function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
