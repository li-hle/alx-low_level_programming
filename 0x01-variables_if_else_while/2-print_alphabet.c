#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lh;

	for (lh = 'a'; lh <= 'z'; lh++)
	{
		putchar(lh);
	}
	putchar('\n');

	return (0);
}
