#include <stdio.h>

/**
 * main - prints all chars in lowercase followed by new line, 
 * except char q and char e
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
