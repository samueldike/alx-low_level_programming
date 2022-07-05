#include <stdio.h>

/**
 * main - entry point
 * Return: alway returns 0
 */
int main(void)
{
	char a;
	char s;

	s = "";

	for (a = 'a'; a <= 'z' ; a++)
	{	
		putchar(a);
		if(a == 'z')
		{
			putchar(s);
		}
	}
	return (0);
}
