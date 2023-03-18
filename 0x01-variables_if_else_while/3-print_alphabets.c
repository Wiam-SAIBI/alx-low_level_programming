#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z' ; lettre++)
		putchar(lettre);

	for (lettre = 'A' ; lettre <= 'Z' ; lettre++)
		putchar(lettre);

	putchar('\n');

	return (0);
}

