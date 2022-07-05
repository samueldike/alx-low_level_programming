#include <stdio.h>

/**
 * main - entry point
 * Return: alway returns 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{	
		putchar(a);
		if(a == 'z')
		{
			putchar(" ");
		}
	}
	return (0);
}
