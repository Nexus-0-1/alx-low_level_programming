#include <stdio.h>

/**
 * main -To Print the lowercase alphabet in reverse.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
