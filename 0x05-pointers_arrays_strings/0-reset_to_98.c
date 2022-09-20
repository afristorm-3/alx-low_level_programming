#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - update the value of  variable
 * the pointer points to to 98
 *@n: pointer to the variable to update
 * Return always 0.
 */

void resent_to_98(int *n)
{
	*n = 98;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	
	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n" , n);
	return (0);

}
