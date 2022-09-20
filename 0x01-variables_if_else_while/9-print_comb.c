#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints single digit numbers with commas
 *
 * Return: 0
 */
int main(void)
{
	int i = 58;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchat(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
