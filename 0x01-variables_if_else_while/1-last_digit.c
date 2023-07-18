#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program built to assign random integers to a variable.
 *
 * Return: Always ? (random)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
