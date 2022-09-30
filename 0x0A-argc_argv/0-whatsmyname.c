#include <stdio.h>
/**
 * main - function prints its name
 * @argc: length argument
 * @argv: array argument
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
